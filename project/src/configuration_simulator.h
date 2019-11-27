/**
 * @file configuration_simulator.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#ifndef SRC_CONFIGURATION_SIMULATOR_H_
#define SRC_CONFIGURATION_SIMULATOR_H_

#include <vector>
#include <list>
#include "src/simulator.h"
#include "src/config_manager.h"

class Route;
class Bus;
class Stop;

class ConfigurationSimulator {
 public:
  ConfigurationSimulator();
  ConfigurationSimulator(ConfigManager*);
  ~ConfigurationSimulator();
  void UsageMessage();
  bool CheckCommandLine(int argc, std::string filename);
  int CheckOptionCommandLine(std::string argv);
  void Start();
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

#endif  // SRC_CONFIGURATION_SIMULATOR_H_
