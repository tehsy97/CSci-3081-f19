/**
 * @file stop.cc
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */

#include <iostream>
#include <vector>

#include "src/stop.h"

// Defaults to Westbound Coffman Union stop
Stop::Stop(int id, double longitude, double latitude) : id_(id),
  longitude_(longitude), latitude_(latitude) {
  // no initialization of list of passengers necessary
}

int Stop::AddPassengers(Passenger * pass) {
  return 0;
}

void Stop::Update() {
  for (std::list<Passenger *>::iterator it = passengers_.begin();
    it != passengers_.end(); it++) {
    (*it)->Update();
  }
}

int Stop::GetId() const {
  return id_;
}

void Stop::Report() const {
  std::cout << "ID: " << id_ << std::endl;
  std::cout << "Passengers waiting: " << passengers_.size() << std::endl;
  for (std::list<Passenger *>::const_iterator it = passengers_.begin();
    it != passengers_.end(); it++) {
    (*it)->Report();
  }
}
