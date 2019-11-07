/**
 * @file stop.cc
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */

#include <iostream>
#include <vector>

#include "src/stop.h"

Stop::Stop(int id, double longitude, double latitude) {
    // Defaults to Westbound Coffman Union stop
    // no initialization of list of passengers necessary
    id_ = id;
    longitude_ = longitude;
    latitude_ = latitude;
}


void Stop::LoadPassengers(Bus * bus) {
    // loading some passengers onto a bus
    for (std::list<Passenger *>::iterator it = passengers_.begin();
        it != passengers_.end();) {
            if(bus->LoadPassenger(*it)){
                it = passengers_.erase(it);
            } else {
                it++;
            }           
    }
}


void Stop::AddPassengers(Passenger * pass) {
    // add the passenger to the stop
    passengers_.push_back(pass);

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
