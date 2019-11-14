/**
 * @file route.cc
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */

#include "src/route.h"

Route::Route(std::string name, Stop ** stops, double * distances,
  int num_stops, PassengerGenerator * generator) {
  for (int i = 0; i < num_stops; i++) {
    stops_.push_back(stops[i]);
  }
  for (int i = 0; i < num_stops - 1; i++) {
    distances_between_.push_back(distances[i]);
  }

  name_ = name;
  num_stops_ = num_stops;
  destination_stop_index_ = 0;
}

Route * Route::Clone() {
  Stop ** stops_clone = new Stop *[num_stops_];
  double * distances_clone = new double[(num_stops_ - 1)];
  int i = 0;
  for (std::list<Stop *>::iterator it = stops_.begin();
    it != stops_.end(); it++) {
      stops_clone[i] = *it;
      i++;
  }

  i = 0;
  for (std::list<double>::iterator it = distances_between_.begin();
    it != distances_between_.end(); it++) {
    distances_clone[i] = *it;
    i++;
  }

  return new Route(name_, stops_clone, distances_clone,
    num_stops_, generator_);
}

void Route::Update() {
  for (std::list<Stop *>::iterator it = stops_.begin();
    it != stops_.end(); it++) {
    (*it)->Update();
  }
}

bool Route::IsAtEnd() const {
  return (destination_stop_index_ == (num_stops_-1)) ||
    (destination_stop_index_ == -1);
}

void Route::NextStop() {
  if (!IsAtEnd()) {
    destination_stop_index_ += 1;
  } else {
    destination_stop_index_ = -1;
  }
}

Stop * Route::GetDestinationStop() const {
  std::list<Stop *>::const_iterator it;
  if ((stops_.size() > (unsigned) destination_stop_index_) &&
    (destination_stop_index_ != -1)) {
    it = std::next(stops_.begin(), destination_stop_index_);
  }
  return *it;
}

double Route::GetTotalRouteDistance() const {
  double total_dist = 0;
  for (std::list<double>::const_iterator it = distances_between_.begin();
    it != distances_between_.end(); it++) {
    total_dist += *it;
  }
  return total_dist;
}

double Route::GetNextStopDistance() const {
  std::list<double>::const_iterator it;
  if (destination_stop_index_ > 0 &&
    distances_between_.size() >= (unsigned) destination_stop_index_) {
    it = std::next(distances_between_.begin(), destination_stop_index_ - 1);
  } else {
    return 0;
  }
  return *it;
}

void Route::Report(std::ostream &out) {
  out << "Name: " << name_ << std::endl;
  out << "Num stops: " << num_stops_ << std::endl;
  int stop_counter = 0;
  for (std::list<Stop *>::const_iterator it = stops_.begin();
    it != stops_.end(); it++) {
    (*it)->Report(out);
    stop_counter++;
  }
}

std::string Route::GetName() {
  return name_;
}

std::list<Stop *> Route::GetStops() {
  return stops_;
}

void Route::UpdateRouteData() {
// Make sure to include a member variable RouteData within the Route class.

// Store a unique identifier for the route(name) in the RouteData id atttribute.
// Create a vector that holds StopData structs.
// Loop through the Route's stops and do the following:
// store a unique identifier for the stop(id) in the StopData id attribute,
// position (latitude and longitude), and the number of passengers at the stop
// in a temporary StopData struct
// store the temporary StopData struct in the vector of StopData structs you
// created in step 2 (i.e. "push_back" the struct)
// After the loop finishes, store the vector of StopData structs in the stops
// attribute of the Route class's new attribute to store Route Data.

  route_visualizer.id = name_;

  std::vector<StopData> stops_data;
  for (std::list<Stop *>::iterator it = stops_.begin();
    it != stops_.end(); it++) {
      stops_data.push_back((*it)->GetStopData());
  }
  route_visualizer.stops = stops_data;
}

RouteData Route::GetRouteData() {
  return route_visualizer;
}

Stop * Route::GetPreviousStop() {
  std::list<Stop *>::iterator it;
  if(destination_stop_index_ > 1 && destination_stop_index_ != -1){
    it = std::next(stops_.begin(), destination_stop_index_-1);
    return *it;
  }
  return NULL;
}
