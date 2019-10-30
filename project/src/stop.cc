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

void Stop::LoadPassengers(Bus * bus) {
    // loading some passengers onto a bus
    for (std::list<Passenger *>::iterator it = passengers_.begin();
        it != passengers_.end(); it++) {
            bus->LoadPassenger(*it);
    }

    while (!passengers_.empty()) {
        passengers_.pop_back();
    }
}

int Stop::AddPassengers(Passenger * pass) {
  passengers_.push_back(pass);
  return 1;
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

void Stop::Report(std::ostream &out) const {
  out << "ID: " << id_ << std::endl;
  out << "Passengers waiting: " << passengers_.size() << std::endl;
  for (std::list<Passenger *>::const_iterator it = passengers_.begin();
    it != passengers_.end(); it++) {
    (*it)->Report(out);
  }
}
