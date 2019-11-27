/**
 * @file config_manager.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#ifndef SRC_CONFIG_MANAGER_H_
#define SRC_CONFIG_MANAGER_H_

#include <vector>
#include <string>


class Route;

class ConfigManager {
 public:
  /**
   * @brief Constructs a Configuration Manager
   */
  ConfigManager();

  /**
   * @brief deconstructs configuration manager.
   */
  ~ConfigManager();

  /**
   * @brief Read configuration file and set up
   * bus, routes, stops, and passengers
   *
   * @param[in] string holding a config filename.
   */
  void ReadConfig(const std::string filename);

  /**
   * @brief Get route or a list of stops
   */
  std::vector<Route *> GetRoutes() const { return routes;}

 private:
  std::vector<Route *> routes;
};

#endif  // SRC_CONFIG_MANAGER_H_
