/**
 * @file override_passenger_generator.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */

#ifndef SRC_OVERRIDE_PASSENGER_GENERATOR_H_
#define SRC_OVERRIDE_PASSENGER_GENERATOR_H_

#include <list>

#include <ctime>

#include "src/passenger_generator.h"
#include "src/stop.h"

class Stop;  // forward declaration

class OverridePassengerGenerator : public PassengerGenerator{
 public:
  /**
  * @brief Constructs a passenger generator with a list of probabilities
  * and a list of stops
  *
  * @param[in] list type double holding probabilities
  * @param[in] stop pointer list holding stops
  *
  */
  OverridePassengerGenerator(std::list<double>, std::list<Stop *>);

  /**
  * @brief override GeneratePassengers() in Passenger Generator
  *
  * @return interger
  */  
  int GeneratePassengers() override;

 protected:
};

#endif  // SRC_OVERRIDE_PASSENGER_GENERATOR_H_
