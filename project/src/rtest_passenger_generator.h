/**
 * @file rtest_passenger_generator.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */

#ifndef PROJECT_SRC_RTEST_PASSENGER_GENERATOR_H_
#define PROJECT_SRC_RTEST_PASSENGER_GENERATOR_H_

#include <list>
#include <random>
#include <ctime>

#include "src/passenger_generator.h"
#include "src/stop.h"

class Stop;  // forward declaration

class RtestPassengerGenerator : public PassengerGenerator{
 public:
  RtestPassengerGenerator(std::list<double>, std::list<Stop *>);
  int GeneratePassengers() override;

 private:
  static std:: minstd_rand0 my_rand;
};

#endif  // PROJECT_SRC_RTEST_PASSENGER_GENERATOR_H_
