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

// After adding passengers onto the bus remove passengers at the stop
int Stop::LoadPassengers(Bus * bus) {
    // loading some passengers onto a bus
    int count = 0;
    for (std::list<Passenger *>::iterator it = passengers_.begin();
        it != passengers_.end();) {
            if (!bus->LoadPassenger(*it)) {
              it++;
            } else {
              it = passengers_.erase(it);
              count += 1;
            }
    }
    return count;
}

// Add passengers to the stop
int Stop::AddPassengers(Passenger * pass) {
  passengers_.push_back(pass);
  return 1;
}

void Stop::Update() {
  for (std::list<Passenger *>::iterator it = passengers_.begin();
    it != passengers_.end(); it++) {
    (*it)->Update();
  }
  GetStopData();
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

StopData Stop::GetStopData() {
  stops_visualizer.id = std::to_string(id_);
  stops_visualizer.position.x = longitude_;
  stops_visualizer.position.y = latitude_;
  stops_visualizer.num_people = passengers_.size();
  return stops_visualizer;
}
