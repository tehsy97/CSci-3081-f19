/**
 * @file bus.cc
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */

#include "src/bus.h"

Bus::Bus(std::string name, Route * out, Route * in,
  int capacity, double speed) {
  name_ = name;
  outgoing_route_ = out;
  incoming_route_ = in;
  passenger_max_capacity_ = capacity;
  speed_ = speed;
  distance_remaining_ = 0;
}


bool Bus::LoadPassenger(Passenger * new_passenger) {
  // loading passenger onto a bus
  if((passenger_max_capacity_ - passengers_.size()) > 0){
    passengers_.push_back(new_passenger);
    return true;
  }
  return false;
}

bool Bus::Move() {
  return true;
}

// bool Refuel() {
//  // This may become more complex in the future
//  fuel_ = max_fuel_;
// }

bool Bus::IsTripComplete() {
  // complete two routes 
  // hit incoming route then end
  
  return true;
}

void Bus::Update() {  // using common Update format
  Move();
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
