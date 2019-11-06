/**
 * @file stop.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */

#ifndef SRC_STOP_H_
#define SRC_STOP_H_

#include <list>
#include <iostream>

#include "src/bus.h"
#include "src/passenger.h"

class Bus;

class Stop {
 public:
  /**
  * @brief Constructs a stop with a id number, longitude, and latitude.
  *
  *
  * @param[in] int holding an stop id number
  * @param[in] double holding a stop longitude
  * @param[in] double holding a stop latitude
  *
  */
  explicit Stop(int, double = 44.973723, double = -93.235365);
  // Adding passengers to the stop (from the generator)

  /**
  * @brief Get stop id number
  * 
  * @return integer
  */
  int GetId() const;

  /**
  * @brief Load and count passengers in a stop list onto bus
  *
  * @param[in] Bus pointer pointing at Bus class
  * 
  * @return integer
  */
  int LoadPassengers(Bus *);

  /**
  * @brief Add passengers into the stop passengers list and return 1
  * 
  * @param[in] Passenger pointer pointing at passenger
  * 
  * @return integer
  */
  int AddPassengers(Passenger *);

  /**
  * @brief Update passengers status at this stop 
  */
  void Update();

  /**
  * @brief print stops status as well as pasenger status at that stop
  */
  void Report(std::ostream &out) const;

 private:
  int id_;
  std::list<Passenger *> passengers_;  // considered array, vector, queue, list
  double longitude_;
  double latitude_;  // are we using long/lat coords?
  // derived information - not needed depending on passengers_
  // data structure implementation?
  // int passengers_present_;
};
#endif  // SRC_STOP_H_
