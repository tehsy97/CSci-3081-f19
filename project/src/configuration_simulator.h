/**
 * @file configuration_simulator.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#ifndef PROJECT_SRC_CONFIGURATION_SIMULATOR_H_
#define PROJECT_SRC_CONFIGURATION_SIMULATOR_H_

#include <vector>
#include <list>
#include <string>
#include "src/simulator.h"
#include "src/config_manager.h"

class Route;
class Bus;
class Stop;

class ConfigurationSimulator {
 public:
  /**
  * @brief Construct configuration simulator
  */
  ConfigurationSimulator();

  /**
  * @brief Construct configuration simulator with configuration manager
  * @param[in] configuration manager object pointer
  */
  explicit ConfigurationSimulator(ConfigManager*);

  /**
  * @brief deconstruct configuration simulator
  */
  ~ConfigurationSimulator();

  /**
  * @brief print the command line usage
  */
  void UsageMessage();

  /**
  * @brief Check required command line
  *
  * @return boolean
  */
  bool CheckCommandLine(int argc, std::string filename);
  /**
  * @brief Check optional command line 
  *
  * @return integer
  */
  int CheckOptionCommandLine(std::string argv);

  /**
  * @brief Create routes with stops and generates passengers.
  */
  void Start();

  /**
  * @brief Update passengers, stops, and bus status for each simulation time
  */
  void Update();

 private:
  ConfigManager* configManager_;
  std::vector<int> busStartTimings_;
  std::vector<int> timeSinceLastBus_;
  int simulationTimeElapsed_;
  std::vector<Route *> prototypeRoutes_;
  std::vector<Bus *> busses_;
  int busId = 1000;
};

#endif  // PROJECT_SRC_CONFIGURATION_SIMULATOR_H_
