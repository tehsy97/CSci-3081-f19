/**
 * @file bus.cc
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */

#include "src/bus.h"

// struct RouteData RouteIN;
// struct RouteData RouteOut;
// struct RouteData RouteNow_1;
// struct StopData StopNow;
// struct StopData StopPrevious;
// can solved by the index one

Bus::Bus(std::string name, Route * out, Route * in, int capacity,
  double speed) {
  name_ = name;
  outgoing_route_ = out;
  incoming_route_ = in;
  passenger_max_capacity_ = capacity;
  speed_ = speed;
  distance_remaining_ = 0;
}


bool Bus::LoadPassenger(Passenger * new_passenger) {
  // loading passenger onto a bus
  if ((unsigned)passenger_max_capacity_ > passengers_.size()) {
    passengers_.push_back(new_passenger);
    new_passenger->GetOnBus();
    return true;
  }
  return false;
}


bool Bus::UnLoadPassenger() {
   Route  * current_route_ =NULL;

  if (outgoing_route_->IsAtEnd()) {
   current_route_ = incoming_route_ ;
  } else {
   current_route_ = outgoing_route_ ;
  }
    Stop * stop_arrived_at = current_route_->GetDestinationStop();
    for (std::list<Passenger *>::iterator it = passengers_.begin();
        it != passengers_.end();) {
            if ((*it)->GetDestination() == stop_arrived_at->GetId()) {
             return true;
             break;
             // will it be overwriiten
            } else {
              ++it;
            }
        }
    return false;
}

void Bus::Move() {

  distance_remaining_ =  static_cast <int> (ceil(distance_remaining_ - speed_));
  std::cout << "/*************************" << std::endl << std::endl;
  std::cout << name_ << "here is the distance remaining ::: " << distance_remaining_  << std::endl;
  std::cout << "/*************************" << std::endl << std::endl;
  UpdateBusData();


}
// bool Refuel() {
//  // This may become more complex in the future
//  fuel_ = max_fuel_;
// }

bool Bus::IsTripComplete() {
  return outgoing_route_->IsAtEnd() && incoming_route_->IsAtEnd();
}

void Bus::Update() { 

  Route  * current_route_ =NULL; // using common Update format error need to fix the last stop need to be diminish
  if (outgoing_route_->IsAtEnd()) {
    current_route_ = incoming_route_ ;
  } else {
    current_route_ = outgoing_route_ ;
  }

  bool flag = true;
  while(true) {
      if (distance_remaining_ == 0) {
        Stop * stop_arrived_at =  current_route_->GetDestinationStop();
        if (UnLoadPassenger()) {
          for (std::list<Passenger *>::iterator it = passengers_.begin();
          it != passengers_.end();) {
                if ((*it)->GetDestination() == stop_arrived_at->GetId()) {
                  it = passengers_.erase(it);
                } else {
                  ++it;
                }
            }
            stop_arrived_at->LoadPassengers(this);
            current_route_->NextStop();
            distance_remaining_ =  current_route_->GetNextStopDistance();
            break;

            // load passenger consume time step
        } else {
          if (stop_arrived_at->PassengerSize ()!=0&&(passenger_max_capacity_ - passengers_.size())>0) {
            stop_arrived_at->LoadPassengers(this);
            current_route_->NextStop();
            distance_remaining_ =  current_route_->GetNextStopDistance();
            break;
          } else {
            current_route_->NextStop();
            distance_remaining_ =  current_route_->GetNextStopDistance();
            Move();
            break;
          }
        }
      } else {
        if (distance_remaining_ > 0) {
          Move();
          break;
        } else {
          Stop * stop_arrived_at =  current_route_->GetDestinationStop();
          if (UnLoadPassenger()) {
            for (std::list<Passenger *>::iterator it = passengers_.begin();
            it != passengers_.end();) {
                  if ((*it)->GetDestination() == stop_arrived_at->GetId()) {
                    it = passengers_.erase(it);
                  } else {
                    ++it;
                  }
              }
              stop_arrived_at->LoadPassengers(this);
              current_route_->NextStop();
              distance_remaining_ =  current_route_->GetNextStopDistance();
              break;
          } else {
            if (stop_arrived_at->PassengerSize ()!=0&&(passenger_max_capacity_ - passengers_.size())>0) {
              //pass but a stop and stop has people, bus has seats
              stop_arrived_at->LoadPassengers(this);
              current_route_->NextStop();
              distance_remaining_ =  current_route_->GetNextStopDistance();
              break;
            } else {
              // stop no people pass 2, stop has peopel, bus no seat (1) pass
              current_route_->NextStop();
              distance_remaining_ =  current_route_->GetNextStopDistance() + distance_remaining_;
            }
          }

        }
      }
  }
}

    // else if (distance_remaining_ < 0) {
    //   Stop * stop_arrived_at =  outgoing_route_->GetDestinationStop();
    //   if ( UnLoadPassenger() || stop_arrived_at->LoadPassengers(this)) {
    //     for (std::list<Passenger *>::iterator it = passengers_.begin();
    //     it != passengers_.end();) {
    //         if ((*it)->GetDestination() == stop_arrived_at->GetId()) {
    //           it = passengers_.erase(it);
    //         } else {
    //           ++it;
    //         }
    //     }
    //   } else {
    //     outgoing_route_->NextStop();
    //     //how to handle it with some distance need to be speciclly change it
    //     distance_remaining_ =  outgoing_route_->GetNextStopDistance() + distance_remaining_ ;
    //   }
    // }
//     else {
//       Move();
//       for (std::list<Passenger *>::iterator it = passengers_.begin();
//       it != passengers_.end(); it++) {
//               (*it)->Update();
//       }
//   }
// }

void Bus::Report(std::ostream &out) {
  out << "Name: " << name_ << std::endl;
  out << "Speed: " << speed_ << std::endl;
  out << "Distance to next stop: " << distance_remaining_ << std::endl;
  out << "\tPassengers (" << passengers_.size() << "): " << std::endl;
  for (std::list<Passenger *>::iterator it = passengers_.begin();
  it != passengers_.end(); it++) {
    (*it)->Report(out);
  }
}



  void Bus::UpdateBusData() {
    BusNow.id = name_;
    float avgL1, avgL2;
    struct Position PositionTemp;
     if ((static_cast <int> (ceil(distance_remaining_))) == 0){


    if (outgoing_route_->IsAtEnd()) {
      Stop* stopnow = incoming_route_->GetDestinationStop();
      Stop* stoppre = incoming_route_->GetPreStop();
      if (stopnow == NULL || stoppre == NULL) {
        avgL1 = 0.0;
        avgL2 = 0.0;
      } else {
        avgL1 = ((stopnow->GetStopData()).position.x +
         (stoppre->GetStopData()).position.x)/2;
        avgL2 = ((stopnow->GetStopData()).position.y +
         (stoppre->GetStopData()).position.y)/2;
      }
      PositionTemp.x = avgL1;
      PositionTemp.y = avgL2;
    } else {
      Stop* stopnow = outgoing_route_->GetDestinationStop();
      Stop* stoppre = outgoing_route_->GetPreStop();
      if (stopnow == NULL || stoppre == NULL) {
        avgL1 = 0.0;
        avgL2 = 0.0;
      } else {
        avgL1 = ((stopnow->GetStopData()).position.x +
         (stoppre->GetStopData()).position.x)/2;
        avgL2 = ((stopnow->GetStopData()).position.y +
         (stoppre->GetStopData()).position.y)/2;
      }
      PositionTemp.x = avgL1;
      PositionTemp.y = avgL2;
    }

    BusNow.position = PositionTemp;
    BusNow.num_passengers = passengers_.size();
    BusNow.capacity = passenger_max_capacity_;
    }

    // need to fix in the future
  }

BusData Bus::GetBusData() {
    return BusNow;
  }

  Stop * Bus::GetNextStop() {
    if (outgoing_route_->IsAtEnd()) {
       incoming_route_->NextStop();
       return incoming_route_->GetDestinationStop();

     } else {
       outgoing_route_->NextStop();
       return outgoing_route_->GetDestinationStop();
     }
  }


  size_t Bus::GetNumPassengers() {
    return passengers_.size();
  }

  int Bus::GetCapacity() {
    return passenger_max_capacity_;
  }
