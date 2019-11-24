/**
 * @file bus.cc
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */

#include "src/bus.h"

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

int Bus::UnloadPassenger(int stop_id) {
  int count = 0;
  for (std::list<Passenger *>::iterator it = passengers_.begin();
    it != passengers_.end();) {
    if ((*it)->GetDestination() == stop_id) {
      it = passengers_.erase(it);
      count += 1;
    } else {
      ++it;
    }
  }
  return count;
}

bool Bus::Move() {
  Stop * stop_arrived_at;
  if (outgoing_route_->IsAtEnd()) {
    stop_arrived_at = incoming_route_->GetDestinationStop();
  } else {
    stop_arrived_at = outgoing_route_->GetDestinationStop();
  }

  while(true) {
    distance_remaining_ = distance_remaining_ - speed_;

    // distance == 0 passengers unload or load then stop return false
    // distance < 0 passengers unload or load then stop return false
    //  distance == 0 not passengers unload or load then stop return true
    // distance < 0 no passengers to load or unload then move return true

    if ((static_cast <int> (ceil(distance_remaining_))) == 0 &&
      (stop_arrived_at->LoadPassengers(this) ||
      UnloadPassenger(stop_arrived_at->GetId()))) {
        if (outgoing_route_->IsAtEnd()) {
          incoming_route_->NextStop();
          distance_remaining_ = incoming_route_->GetNextStopDistance();
        } else {
          outgoing_route_->NextStop();
          distance_remaining_ = outgoing_route_->GetNextStopDistance();
        }
        return false;
    } else if ((static_cast <int> (ceil(distance_remaining_))) < 0 &&
      (stop_arrived_at->LoadPassengers(this) ||
      UnloadPassenger(stop_arrived_at->GetId()))){
        if (outgoing_route_->IsAtEnd()) {
          incoming_route_->NextStop();
          distance_remaining_ = incoming_route_->GetNextStopDistance();
        } else {
          outgoing_route_->NextStop();
          distance_remaining_ = outgoing_route_->GetNextStopDistance();
        }
        return false;
      } else if ((static_cast <int> (ceil(distance_remaining_))) == 0 &&
        (stop_arrived_at->LoadPassengers(this) &&
        UnloadPassenger(stop_arrived_at->GetId()))) {
          if (outgoing_route_->IsAtEnd()) {
            incoming_route_->NextStop();
            distance_remaining_ = incoming_route_->GetNextStopDistance();
          } else {
            outgoing_route_->NextStop();
            distance_remaining_ = outgoing_route_->GetNextStopDistance();
          }
          return true;
      } else if ((static_cast <int> (ceil(distance_remaining_))) < 0 &&
        (stop_arrived_at->LoadPassengers(this) &&
        UnloadPassenger(stop_arrived_at->GetId()))) {
          if (outgoing_route_->IsAtEnd()) {
            incoming_route_->NextStop();
            distance_remaining_ += incoming_route_->GetNextStopDistance();
          } else {
            outgoing_route_->NextStop();
            distance_remaining_ += outgoing_route_->GetNextStopDistance();
          }
      }
  }

  }



  // if (distance_remaining_ < 0) {
  //   distance_remaining_ = 0;
  // }
}

// bool Refuel() {
//  // This may become more complex in the future
//  fuel_ = max_fuel_;
// }

bool Bus::IsTripComplete() {
  return outgoing_route_->IsAtEnd() && incoming_route_->IsAtEnd();
}

void Bus::Update() {  // using common Update format
  // Stop * stop_arrived_at;
  // if (outgoing_route_->IsAtEnd()) {
  //   stop_arrived_at = incoming_route_->GetDestinationStop();
  // } else {
  //   stop_arrived_at = outgoing_route_->GetDestinationStop();
  // }
  // if ((static_cast <int> (ceil(distance_remaining_))) == 0) {
  //   if (outgoing_route_->IsAtEnd()) {
  //     stop_arrived_at = incoming_route_->GetDestinationStop();
  //     incoming_route_->NextStop();
  //     distance_remaining_ = incoming_route_->GetNextStopDistance();
  //     // std ::cout << "*************this is incoming route:"
  //       // << distance_remaining_<< std::endl;
  //   } else {
  //     stop_arrived_at = outgoing_route_->GetDestinationStop();
  //     for (std::list<Passenger *>::iterator it = passengers_.begin();
  //       it != passengers_.end(); it++) {
  //       (*it)->Update();
  //     }
  //
  //     outgoing_route_->NextStop();
  //     distance_remaining_ = outgoing_route_->GetNextStopDistance();
  //     // std ::cout << "**********this is outcoming route id: "
  //       // << stop_arrived_at->GetId() << std::endl;
  //   }
  //
  //   // unload passengers in the bus who have reach their destination
  //   // int passengers_unloaded = UnloadPassenger(stop_arrived_at->GetId());
  //   UnloadPassenger(stop_arrived_at->GetId());
  //
  //   // std::cout << "Passengers_unloaded at stop " << stop_arrived_at->GetId()
  //   //     << ": " << Passengers_unloaded << std::endl << std::endl;
  //
  //   // load passengers at the stop to the bus
  //   stop_arrived_at->LoadPassengers(this);
  // } else if (distance_remaining_ < 0) {
  //   if (outgoing_route_->IsAtEnd()) {
  //     stop_arrived_at = incoming_route_->GetDestinationStop();
  //     if(UnloadPassenger(stop_arrived_at->GetId()) || stop_arrived_at->LoadPassengers(this)){
  //       distance_remaining_ = 0;
  //     } else {
  //       incoming_route_->NextStop();
  //       distance_remaining_ += incoming_route_->GetNextStopDistance();
  //     }
  //   } else {
  //     stop_arrived_at = outgoing_route_->GetDestinationStop();
  //     if(UnloadPassenger(stop_arrived_at->GetId()) || stop_arrived_at->LoadPassengers(this)){
  //       distance_remaining_ = 0;
  //     } else {
  //       outgoing_route_->NextStop();
  //       distance_remaining_ += outgoing_route_->GetNextStopDistance();
  //     }
  //   }
  // } else {
  //   Move();
  //   for (std::list<Passenger *>::iterator it = passengers_.begin();
  //     it != passengers_.end(); it++) {
  //     (*it)->Update();
  //   }
  // }
  UpdateBusData();
  for (std::list<Passenger *>::iterator it = passengers_.begin();
    it != passengers_.end(); it++) {
    (*it)->Update();
  }

 }

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
// Store a unique identifier for the bus(name) in the BusData id atttribute.
// Use the current route to get the previous stop (on the current route).
// You will need to figure out a way (write a new function, etc.) to get the
// bus's previous stop. Compute and store the average of the latitudes and
// longitudes belonging to the current and previous stops.
// Store the averages in the BusData position attribute. (This algorithm is
// somewhat clunky and not realistic. We may update this in the future.)
// Populate the numPassengers and capacity attributes within your BusData
// variable.
  bus_visualizer.id = name_;

  if ((static_cast <int> (ceil(distance_remaining_))) == 0) {

  } else {
    Stop * previous_stop_;
    Stop * current_stop_;
    if (outgoing_route_->IsAtEnd()) {
        current_stop_ = incoming_route_->GetDestinationStop();
        previous_stop_ = incoming_route_->GetPreviousStop();
    } else {
      current_stop_ = outgoing_route_->GetDestinationStop();
      previous_stop_ = outgoing_route_->GetPreviousStop();
    }
    // Route * route;
    // RouteData route_data_ = route->GetRouteData();

    double cur_prev_longitude = 0;
    double cur_prev_latitude = 0;

    if (current_stop_ != NULL && previous_stop_ != NULL) {
      cur_prev_longitude += ((current_stop_->GetStopData()).position.x + (previous_stop_->GetStopData()).position.x);
      cur_prev_latitude += ((current_stop_->GetStopData()).position.y + (previous_stop_->GetStopData()).position.y);
    } else if (current_stop_ == NULL) {
      cur_prev_longitude += (previous_stop_->GetStopData()).position.x;
      cur_prev_latitude += (previous_stop_->GetStopData()).position.y;
    } else {
      cur_prev_longitude += (current_stop_->GetStopData()).position.x;
      cur_prev_latitude += (current_stop_->GetStopData()).position.y;
    }
    bus_visualizer.position.x = cur_prev_longitude / 2;
    bus_visualizer.position.y = cur_prev_latitude / 2;
  }

  bus_visualizer.num_passengers = passengers_.size();
  bus_visualizer.capacity = passenger_max_capacity_;
}

BusData Bus::GetBusData() {
  return bus_visualizer;
}

std::string Bus::GetName() const {
  return name_;
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
