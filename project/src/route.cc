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

  Route * route_clone = new Route (name_, stops_clone, distances_clone,
    num_stops_, generator_);
  return route_clone;
}

void Route::Update() {
  for (std::list<Stop *>::iterator it = stops_.begin();
    it != stops_.end(); it++) {
    (*it)->Update();
  }
}

bool Route::IsAtEnd() const {
  return destination_stop_index_ == (num_stops_-1);
}

void Route::NextStop() {
  if (!IsAtEnd()){
    destination_stop_index_ ++;
  }else{
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
