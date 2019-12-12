/**
 * @file bus.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#ifndef PROJECT_SRC_BUS_H_
#define PROJECT_SRC_BUS_H_

#include <iostream>
#include <list>
#include <string>
#include <cmath>

#include "src/passenger.h"
#include "src/route.h"
#include "src/stop.h"
#include "./data_structs.h"

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
  * @brief check if bus is current at incoming or outgoing route
  *
  * @return route
  */
  Route * CheckInOrOutRoute();

  /**
  * @brief Update bus, stop, passengers, and routes status
  */
  void Update();  // remove passengers

  /**
  * @brief Print bus information and status
  */
  void Report(std::ostream &out);

  /**
  * @brief Print bus information and status
  * called by the visualizer to instruct
  * the bus object to populate the BusData
  * struct with the latest information
  * (see the file data_structs.h to
  * determine what information the BusData
  * struct stores.). This a nontivial
  * method, so we will outline its operation
  * (which you have to implement), below.
  */
  void UpdateBusData();

  /**
  * @brief called by the visualizer to get then
  * name of the bus
  */
  BusData GetBusData();

  /**
  * @brief called by the visualizer to get the name of the bus
  */
  std::string GetName() const;

  /**
  * @brief called by the visualizer to get the pointer
  * to the bus's next stop
  */
  Stop * GetNextStop();

  /**
  * @brief called by the visualizer to get the current
  * number of passengers on the bus
  */
  size_t GetNumPassengers();

  /**
  * @brief called by the visualizer to get the maximum
  * number of passengers that the bus can hold
  */
  int GetCapacity();

 private:
  BusData bus_visualizer;
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
#endif  // PROJECT_SRC_BUS_H_
