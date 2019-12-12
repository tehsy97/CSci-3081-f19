/**
 * @file passenger_generator.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */

#ifndef PROJECT_SRC_PASSENGER_GENERATOR_H_
#define PROJECT_SRC_PASSENGER_GENERATOR_H_

#include <list>
#include "src/passenger_factory.h"
#include "src/stop.h"

class Stop;  // forward declaration

class PassengerGenerator {
 public:
  /**
  * @brief Constructs a passenger generator with a list of probabilities
  * and a list of stops
  *
  * @param[in] list type double holding probabilities
  * @param[in] stop pointer list holding stops
  *
  */
  PassengerGenerator(std::list<double>, std::list<Stop *>);
  // Makes the class abstract, cannot instantiate and forces subclass override

  /**
  * @brief pure virtual function of GeneratePassengers() in Passenger Generator
  *
  * @return interger
  */  
  virtual int GeneratePassengers() = 0;  // pure virtual

 protected:
  std::list<double> generation_probabilities_;
  std::list<Stop *> stops_;

  // should we be using a singleton here somehow?
  PassengerFactory * pass_factory;
};
#endif  // PROJECT_SRC_PASSENGER_GENERATOR_H_
