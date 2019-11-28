/**
 * @file route.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */

#ifndef SRC_ROUTE_H_
#define SRC_ROUTE_H_

#include <list>
#include <iostream>
#include <string>
#include <vector>

#include "./passenger_generator.h"
#include "./stop.h"
#include "./data_structs.h"

class PassengerGenerator;
class Stop;

class Route {
 public:
 /**
  * @brief Constructs a route with a standard name, Stops,
  * distances, number of stops, and passenger generator.
  *
  * @param[in] string holding route name
  * @param[in] Stop double pointer pointing to a list of stops
  * @param[in] double pointer array storing a list of distances between stops
  * @param[in] int holding a stops number
  * @param[in] Passenger Generator pointer pointing
  *            to Random Passenger Generator constructor
  */
  Route(std::string name, Stop ** stops, double * distances, int num_stops,
        PassengerGenerator * generator_);

  /**
  * @brief Deep copy constructor
  *
  * @return a copy of route * (constructor)
  */
  Route * Clone();

  /**
  * @brief Update each stops in the route
  */
  void Update();

  /**
  * @brief print information and status of route (stops)
  */
  void Report(std::ostream&);

  /**
  * @brief check if has reach the end of route
  *
  * @return const boolean
  */
  bool IsAtEnd() const;

  /**
  * @brief get to the next stop in the route
  */
  void NextStop();  // Change destination_stop_ to next stop

  /**
  * @brief get the stop in the route
  *
  * @return const Stop *
  */
  Stop * GetDestinationStop() const;    // Get pointer to next stop

  /**
  * @brief get the total distance in route
  *
  * @return const double
  */
  double GetTotalRouteDistance() const;

  /**
  * @brief get the distance to the next stop
  *
  * @return const double
  */
  double GetNextStopDistance() const;

  /**
  * @brief called by the visualizer to get
  * the name of the route
  *
  * @return string
  */
  std::string GetName();

  /**
  * @brief called by the visualizer to get
  * the route's list of Stop pointers
  */
  std::list<Stop *> GetStops();

  /**
  * @brief called by the visualizer to update
  * route data
  */
  void UpdateRouteData();

  /**
  * @brief called by the visualizer to get
  * the route's data
  */
  RouteData GetRouteData();

  /**
  * @brief will return the previous stop
  */
  Stop * GetPreviousStop();

 private:
  int GenerateNewPassengers();  // generates passengers on its route
  PassengerGenerator * generator_;
  std::list<Stop *> stops_;
  std::list<double> distances_between_;  // length = num_stops_ - 1
  std::string name_;
  int num_stops_;

  int destination_stop_index_;  // always starts at zero, no init needed
  Stop * destination_stop_;
  double trip_time_;  // derived data - total distance travelled on route

  RouteData route_visualizer;
};
#endif  // SRC_ROUTE_H_
