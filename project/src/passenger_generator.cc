/**
 * @file passenger_generator.cc
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */

#include "src/passenger_generator.h"

#include "src/passenger.h"

PassengerGenerator::PassengerGenerator(std::list<double> probs,
   std::list<Stop *> stops) {
  // probability of last stop of routes will always be zero
  if (!probs.empty()) {
    probs.pop_back();
    probs.push_back(0);
  }
  generation_probabilities_ = probs;
  stops_ = stops;
}
