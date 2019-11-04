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
}

Route * Route::Clone(){
  Stop ** stops_clone = new Stop *[num_stops_];
  double * distances_clone = new double[(num_stops_ - 1)];
  int i = 0;
  for (std::list<Stop *>::iterator it = stops_.begin();
    it != stops_.end(); it++) {
      stops_clone[i] = *it;
      i++;
  }

  i = 0;
  for(std::list<double>::iterator it = distances_between_.begin();
    it != distances_between_.end(); it++) {
    distances_clone[i] = *it;
    i++;
  }

  Route * route_clone = new Route(name_, stops_clone, distances_clone, num_stops_, generator_); 
  return route_clone;
}

void Route::Update() {
  for (std::list<Stop *>::iterator it = stops_.begin();
    it != stops_.end(); it++) {
    (*it)->Update();
  }
}

  // bool IsAtEnd() const;
  // void NextStop();  // Change destination_stop_ to next stop
  // Stop * GetDestinationStop() const;    // Get pointer to next stop
  // double GetTotalRouteDistance() const;
  // double GetNextStopDistance() const;

bool Route::IsAtEnd() const {
  std::cout << stops_.front() << std::endl;
  std::cout << stops_.back() << std::endl;
  
  return stops_.front() == stops_.back();
}

void Route::NextStop(){
  stops_.pop_front();
  distances_between_.pop_front();
  return;
}

Stop * Route::GetDestinationStop() const {
  // pass in generator here maybe????
  // return new Stop(-1, -1,-1);
  return stops_.front();
}

double Route::GetTotalRouteDistance() const {
  double total_dist = 0;
  for(std::list<double>::const_iterator it = distances_between_.begin();
    it != distances_between_.end(); it++) {
    total_dist += *it;
  }
  return total_dist;
}

double Route::GetNextStopDistance() const {
  return distances_between_.front();
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
