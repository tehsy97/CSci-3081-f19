/**
 * @file configuration_simulator.cc
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */

#include <string>
#include <fstream>
#include "src/configuration_simulator.h"
#include "src/bus.h"
#include "src/route.h"

ConfigurationSimulator::ConfigurationSimulator() {
}

ConfigurationSimulator::ConfigurationSimulator(ConfigManager* configManager) {
    configManager_ = configManager;
}

ConfigurationSimulator::~ConfigurationSimulator() {
}

void ConfigurationSimulator::UsageMessage() {
  std::cout << "Usage: ./build/bin/configuration_sim <config_filename> " <<
  "[length of simulation] [outputfile]\n";
}

bool ConfigurationSimulator::CheckCommandLine(int argc, std::string filename) {
  if (argc >= 2) {
      // std::cout<< "hh" << std::endl;
    try {
      int filename_len = filename.length();
      // std::cout<< "hhhh" << std::endl;
      if (filename.substr(filename_len-4) == ".txt" && filename_len > 4) {
          // std::cout<< "hhhhhhhh" << std::endl;
        // filename = "../config/" + filename;
        std::ifstream infile(filename);
        if (infile.is_open()) {
          infile.close();
        } else {
          throw "Couldn't open file";
        }
      } else {
        throw "Invalid file type";
      }
    } catch (...) {
      std::cout << "Error opening file: " << filename << std::endl;
      std::cout << "Default configuration file will be used." << std::endl;
      return false;
    }
  } else {
    UsageMessage();
    std::cout << "Default configuration file will be used." << std::endl;
    return false;
  }
  return true;
}

int ConfigurationSimulator::CheckOptionCommandLine(std::string argv) {
  // return 1 if only length of simulation is entered
  // return 2 if only output file is given
  try {
    // std::cout << "hello" << std::endl;
    // std::cout << "hellooo" << std::endl;
    if (atoi(argv.c_str()) != 0) {
      return 1;
    } else {
      std::ofstream outfile(argv);
      if (outfile.is_open()) {
        outfile.close();
        return 2;
      } else {
        throw "Couldn't open file";
      }
      throw "Invalid length of simulation";
    }
  } catch (const char *s) {
    if ((std::string) s != "Invalid length of simulation") {
      std::cout << "Invalid length of simulation! The default 50 will be used.";
      std::cout << std::endl;
    } else {
      std::cout << "Couldn't open output file." << std::endl;
    }
    return 0;
  }
}

void ConfigurationSimulator::Start() {
    busStartTimings_.push_back(10);

    timeSinceLastBus_.resize(busStartTimings_.size());
    for (int i = 0; i < static_cast<int>(timeSinceLastBus_.size()); i++) {
        timeSinceLastBus_[i] = 0;
    }

    prototypeRoutes_ = configManager_->GetRoutes();
    simulationTimeElapsed_ = 0;  // init, but also allows restart
    prototypeRoutes_ = configManager_->GetRoutes();

    for (int i = 0; i < static_cast<int>(prototypeRoutes_.size()); i++) {
        prototypeRoutes_[i]->Report(std::cout);
        prototypeRoutes_[i]->UpdateRouteData();
    }
}

void ConfigurationSimulator::Update() {
  simulationTimeElapsed_++;

    std::cout << "~~~~~~~~ The time is now " << simulationTimeElapsed_;
    std::cout << "~~~~~~~~" << std::endl;

    std::cout << "~~~~~~~~ Generating new busses if needed ";
    std::cout << "~~~~~~~~" << std::endl;

    // Check if we need to generate new busses
    for (int i = 0; i < static_cast<int>(timeSinceLastBus_.size()); i++) {
        // Check if we need to make a new bus
        if (0 >= timeSinceLastBus_[i]) {
            Route * outbound = prototypeRoutes_[2 * i];
            Route * inbound = prototypeRoutes_[2 * i + 1];
            busses_.push_back(new Bus(std::to_string(busId),
              outbound->Clone(), inbound->Clone(), 60, 1));
            busId++;
            busses_[busses_.size() - 1]->UpdateBusData();
            timeSinceLastBus_[i] = busStartTimings_[i];
        } else {
            timeSinceLastBus_[i]--;
        }
    }

    std::cout << "~~~~~~~ Updating busses ";
    std::cout << "~~~~~~~" << std::endl;

    // Update busses
    for (int i = static_cast<int>(busses_.size()) - 1; i >= 0; i--) {
        busses_[i]->Update();
        if (busses_[i]->IsTripComplete()) {
            busses_.erase(busses_.begin() + i);
            continue;
        }
        // busses_[i]->UpdateBusData();
        busses_[i]->Report(std::cout);
    }

    std::cout << "~~~~~~~ Updating routes ";
    std::cout << "~~~~~~~" << std::endl;
    // Update routes
    for (int i = 0; i < static_cast<int>(prototypeRoutes_.size()); i++) {
        prototypeRoutes_[i]->Update();
        // prototypeRoutes_[i]->UpdateRouteData();
        prototypeRoutes_[i]->Report(std::cout);
    }
}
