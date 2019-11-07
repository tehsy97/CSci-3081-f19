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
  if ((passenger_max_capacity_ - passengers_.size()) > 0) {
    passengers_.push_back(new_passenger);
    new_passenger->GetOnBus();
    return true;
  }
  return false;
}

bool Bus::Move() {
  distance_remaining_ = distance_remaining_ - 1;
  return true;
}
// bool Refuel() {
//  // This may become more complex in the future
//  fuel_ = max_fuel_;
// }

bool Bus::IsTripComplete() {
  if ( outgoing_route_->IsAtEnd() && incoming_route_->IsAtEnd()) {
    return true;
  } else {
    return false;
  }
}

void Bus::Update() { //using common Update format
   if ((int)distance_remaining_ == 0) { 
    if (outgoing_route_->IsAtEnd()){
      Stop * stop_arrived_at = incoming_route_->GetDestinationStop();
      for(std::list<Passenger *>::iterator it = passengers_.begin();it != passengers_.end(); it++){
        if ((*it)->GetDestination() == stop_arrived_at->GetId()) {
           Passenger * departing_passenger = *it;
           it = passengers_.erase(it);
           it--;
           delete departing_passenger;
        }
      }
      stop_arrived_at->LoadPassengers(this);

      incoming_route_->NextStop();
      distance_remaining_ = incoming_route_->GetNextStopDistance();

    } else {
      Stop * stop_arrived_at =  outgoing_route_->GetDestinationStop();
      for(std::list<Passenger *>::iterator it = passengers_.begin();it != passengers_.end(); it++){
        if ((*it)->GetDestination() == stop_arrived_at->GetId()) {
           Passenger * departing_passenger = *it;
           it = passengers_.erase(it);
           it--;
           delete departing_passenger;
        }
      stop_arrived_at->LoadPassengers(this);
      outgoing_route_->NextStop();
      distance_remaining_ =  outgoing_route_->GetNextStopDistance();
    }
   }
  } else {
     Move();
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