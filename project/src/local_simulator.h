/**
 * @file local_simulator.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#ifndef PROJECT_SRC_LOCAL_SIMULATOR_H_
#define PROJECT_SRC_LOCAL_SIMULATOR_H_

#include <vector>

#include "src/simulator.h"

class LocalSimulator : public Simulator {
 public:
  /**
  * @brief Create routes with stops and generates passengers.
  *
  * @return boolean
  */
  bool Start() override;

  /**
  * @brief Update passengers, stops, and bus status for each simulation time
  *
  * @return boolean
  */
  bool Update() override;
 private:
  std::vector<int> bus_counters_;
  std::vector<int> bus_start_timings_;
  std::vector<int> time_since_last_bus_generation_;
  int simulation_time_elapsed_;
};

#endif  // PROJECT_SRC_LOCAL_SIMULATOR_H_
