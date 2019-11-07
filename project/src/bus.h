/**
 * @file bus.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#ifndef SRC_BUS_H_
#define SRC_BUS_H_

#include <iostream>
#include <list>
#include <string>
#include <cmath>

#include "src/passenger.h"
#include "src/route.h"
#include "src/stop.h"

class PassengerUnloader;
class PassengerLoader;
class Route;
class Stop;

class Bus {
 public:
  /**
  * @brief Constructs a Bus with a name, outgoing route, incoming route,
  * capacity, and speed.
  *
  * @param[in] string holding name
  * @param[in] route pointer holding outgoing route
  * @param[in] route pointer holding a incoming route
  * @param[in] int holding capacity number
  * @param[in] double holding speed number
  */
  Bus(std::string name, Route * out, Route * in, int capacity = 60,
                                                 double speed = 1);
  /**
  * @brief Get passengers on bus
  * 
  * @return boolean
  */
  bool LoadPassenger(Passenger *);  // returning revenue delta

  /**
  * @brief Get passengers off the bus with they reach their destination
  * 
  * @return integer
  */
  int UnloadPassenger(int);

  /**
  * @brief Move bus closer to next destination
  * 
  * @return boolean
  */
  bool Move();

  /**
  * @brief check if bus has complete its outgoing and incoming route
  * 
  * @return boolean
  */
  bool IsTripComplete();

  /**
  * @brief Update bus, stop, passengers, and routes status
  */
  void Update();  // remove passengers

  /**
  * @brief Print bus information and status
  */
  void Report(std::ostream &out);

 private:
  std::list<Passenger *> passengers_;
  int passenger_max_capacity_;
  std::string name_;
  double speed_;  // could also be called "distance travelled in one time step"
  Route * outgoing_route_;
  Route * incoming_route_;
  double distance_remaining_;  // when negative?, unload/load procedure occurs
                              // AND next stop set
  // double revenue_; // revenue collected from passengers, doesn't include
                      // passengers who pay on deboard
  // double fuel_;   // may not be necessary for our simulation
  // double max_fuel_;
};
#endif  // SRC_BUS_H_
