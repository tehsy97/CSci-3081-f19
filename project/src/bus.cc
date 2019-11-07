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
  distance_remaining_ = distance_remaining_ - 1;
  if(distance_remaining_ < 0){
    distance_remaining_ = 0;
  }
  return true;
}
// bool Refuel() {
//  // This may become more complex in the future
//  fuel_ = max_fuel_;
// }

bool Bus::IsTripComplete() {
  return outgoing_route_->IsAtEnd() && incoming_route_->IsAtEnd();
}

void Bus::Update() {  // using common Update format
  if ((static_cast <int> (ceil(distance_remaining_))) == 0) {
    Stop * stop_arrived_at;
    if (outgoing_route_->IsAtEnd()) {
      stop_arrived_at = incoming_route_->GetDestinationStop();
      incoming_route_->NextStop();
      distance_remaining_ = incoming_route_->GetNextStopDistance();
      std ::cout << "*************this is incoming route:"
        << distance_remaining_<< std::endl;
    } else {
      stop_arrived_at = outgoing_route_->GetDestinationStop();
      for (std::list<Passenger *>::iterator it = passengers_.begin();
        it != passengers_.end(); it++) {
        (*it)->Update();
      }
      outgoing_route_->NextStop();
      distance_remaining_ = outgoing_route_->GetNextStopDistance();
      std ::cout << "**********this is outcoming route id: "
        << stop_arrived_at->GetId() << std::endl;
    }

    // unload passengers in the bus who have reach their destination
    int passengers_unloaded = UnloadPassenger(stop_arrived_at->GetId());

    // std::cout << "Passengers_unloaded at stop " << stop_arrived_at->GetId()
    //     << ": " << Passengers_unloaded << std::endl << std::endl;

    // load passengers at the stop to the bus
    stop_arrived_at->LoadPassengers(this);
  } else {
    Move();
    for (std::list<Passenger *>::iterator it = passengers_.begin();
      it != passengers_.end(); it++) {
      (*it)->Update();
    }
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
