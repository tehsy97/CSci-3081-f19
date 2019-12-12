/**
 * @file random_passenger_generator.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */

#ifndef PROJECT_SRC_RANDOM_PASSENGER_GENERATOR_H_
#define PROJECT_SRC_RANDOM_PASSENGER_GENERATOR_H_

#include <list>
#include <random>
#include <ctime>

#include "src/passenger_generator.h"
#include "src/stop.h"

class Stop;  // forward declaration

class RandomPassengerGenerator : public PassengerGenerator{
 public:
  /**
  * @brief Constructs a random passenger generator with a list of probabilitis 
  * and a list of stops.
  *
  * @param[in] list type double holding probabilities
  * @param[in] stop pointer list holding stops
  */
  RandomPassengerGenerator(std::list<double>, std::list<Stop *>);

  /**
  * @brief ramdomly generates passengers for each stops according to 
  * probabilities and return number of passenger generated  
  * 
  * @return integer
  */
  int GeneratePassengers() override;

 private:
  static std:: minstd_rand0 my_rand;
};

#endif  // PROJECT_SRC_RANDOM_PASSENGER_GENERATOR_H_
