/**
 * @file bus.cc
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */

#include "src/bus.h"

Bus::Bus(std::string name, Route *out, Route *in, int capacity, double speed) {
  name_ = name;
  outgoing_route_ = out;
  incoming_route_ = in;
  passenger_max_capacity_ = capacity;
  speed_ = speed;
  distance_remaining_ = 0;
}

bool Bus::LoadPassenger(Passenger *new_passenger) {
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
  distance_remaining_ = distance_remaining_ - speed_;
  return true;
}

// bool Refuel() {
//  // This may become more complex in the future
//  fuel_ = max_fuel_;
// }

bool Bus::IsTripComplete() {
  return outgoing_route_->IsAtEnd() && incoming_route_->IsAtEnd();
}

Route * Bus::CheckInOrOutRoute() {
  if (outgoing_route_->IsAtEnd()) {
    return incoming_route_;
  }
  return outgoing_route_;
}

void Bus::Update() {  // using common Update format
  // Stop *stop_arrived_at;
  // if (outgoing_route_->IsAtEnd()) {
  //   stop_arrived_at = incoming_route_->GetDestinationStop();
  // } else {
  //   stop_arrived_at = outgoing_route_->GetDestinationStop();
  // }
  Route *route = CheckInOrOutRoute();
  Stop *stop_arrived_at = route->GetDestinationStop();

  for (std::list<Passenger *>::iterator it = passengers_.begin();
      it != passengers_.end(); it++) {
      (*it)->Update();
  }
  if (distance_remaining_ <= 0) {
    int passenger_unloaded = UnloadPassenger(stop_arrived_at->GetId());
    bool passenger_loaded = stop_arrived_at->LoadPassengers(this);
    if (passenger_loaded || passenger_unloaded) {
      UpdateBusData();
      // if (outgoing_route_->IsAtEnd()) {
      //   incoming_route_->NextStop();
      //   distance_remaining_ = incoming_route_->GetNextStopDistance();
      // } else {
      //   outgoing_route_->NextStop();
      //   distance_remaining_ = outgoing_route_->GetNextStopDistance();
      // }

      route->NextStop();
      distance_remaining_ = route->GetNextStopDistance();
    } else {
      if (distance_remaining_ == 0) {
        UpdateBusData();
        // if (outgoing_route_->IsAtEnd()) {
        //   incoming_route_->NextStop();
        //   distance_remaining_ = incoming_route_->GetNextStopDistance();
        // } else {
        //   outgoing_route_->NextStop();
        //   distance_remaining_ = outgoing_route_->GetNextStopDistance();
        // }
        route->NextStop();
        distance_remaining_ = route->GetNextStopDistance();
        Move();
      } else {
        // if (outgoing_route_->IsAtEnd()) {
        //   incoming_route_->NextStop();
        //   distance_remaining_ += incoming_route_->GetNextStopDistance();
        // } else {
        //   outgoing_route_->NextStop();
        //   distance_remaining_ += outgoing_route_->GetNextStopDistance();
        // }
        route->NextStop();
        distance_remaining_ += route->GetNextStopDistance();
        Move();
        UpdateBusData();
      }
    }
  } else {
    Move();
    UpdateBusData();
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

  Route *route = CheckInOrOutRoute();

  if (IsTripComplete()) {
    Stop *current_stop_ = outgoing_route_->GetDestinationStop();

    bus_visualizer.position.x = (current_stop_->GetStopData()).position.x;
    bus_visualizer.position.y = (current_stop_->GetStopData()).position.y;

  } else if (distance_remaining_ <= 0) {
    // Stop *current_stop_;
    
    // if (outgoing_route_->IsAtEnd()) {
    //   current_stop_ = incoming_route_->GetDestinationStop();
    // } else {
    //   current_stop_ = outgoing_route_->GetDestinationStop();
    // }

    Stop *current_stop_ = route->GetDestinationStop();

    bus_visualizer.position.x = (current_stop_->GetStopData()).position.x;
    bus_visualizer.position.y = (current_stop_->GetStopData()).position.y;

  } else {
    // Stop *previous_stop_;
    // Stop *current_stop_;
    // if (outgoing_route_->IsAtEnd()) {
    //   current_stop_ = incoming_route_->GetDestinationStop();
    //   previous_stop_ = incoming_route_->GetPreviousStop();
    // } else {
    //   current_stop_ = outgoing_route_->GetDestinationStop();
    //   previous_stop_ = outgoing_route_->GetPreviousStop();
    // }
    // RouteData route_data_ = route->GetRouteData();

    Stop *current_stop_ = route->GetDestinationStop();
    Stop *previous_stop_ = route->GetPreviousStop();

    double cur_prev_longitude = 0;
    double cur_prev_latitude = 0;

    if (current_stop_ != NULL && previous_stop_ != NULL) {
      cur_prev_longitude += ((current_stop_->GetStopData()).position.x +
                             (previous_stop_->GetStopData()).position.x);
      cur_prev_latitude += ((current_stop_->GetStopData()).position.y +
                            (previous_stop_->GetStopData()).position.y);
    }

    bus_visualizer.position.x = cur_prev_longitude / 2;
    bus_visualizer.position.y = cur_prev_latitude / 2;
  }

  bus_visualizer.num_passengers = passengers_.size();
  bus_visualizer.capacity = passenger_max_capacity_;
}

BusData Bus::GetBusData() { return bus_visualizer; }

std::string Bus::GetName() const { return name_; }

Stop *Bus::GetNextStop() {
  Route *route = CheckInOrOutRoute();
  // if (outgoing_route_->IsAtEnd()) {
  //   incoming_route_->NextStop();
  //   return incoming_route_->GetDestinationStop();
  // } else {
  //   outgoing_route_->NextStop();
  //   return outgoing_route_->GetDestinationStop();
  // }
  route->NextStop();
  return route->GetDestinationStop();
}

size_t Bus::GetNumPassengers() {
  return passengers_.size();
}

int Bus::GetCapacity() {
  return passenger_max_capacity_;
}
