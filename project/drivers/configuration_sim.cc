/**
 * @file configuration_sim.cc
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#include <iostream>
#include <fstream>
#include <exception>
#include "src/config_manager.h"
#include "src/configuration_simulator.h"

void UsageMessage(){
  std::cout << "Usage: ./build/bin/configuration_sim <config_filename>\n";
}

bool CheckCommandLine(int argc, char**argv){
  if (argc != 2){
    UsageMessage();
    return false;
  }

  std::ifstream infile(argv[argc-1]);

  try {
    if(infile.is_open()){
      infile.close();
      return true;
    } else {
      throw "Couldn't open file";
    }

  } catch (const std::exception &e){
    std::cout << "Exception: " << e.what() << std::endl;
    return false;
  }
  return true;
}
int main(int argc, char**argv) {
  // NOTE: this usage will change depending on
  //       how you build your config_sim classes
  //   E.g., how will you handle getting the length of simulation value?
  // Check command line params for config file name

  // if filename arg present
  //   Create ConfigManager
  //   Call ReadConfig
  //   Create ConfigurationSimulator
  //   Call Start on ConfigurationSimulator
  //   Start for loop, length of simulation (where from?)
  //     Call Update on ConfigurationSimulator
  // else
  //   echo info to the user about needing a config file name
  char ** argc_list = argv;
  if(CheckCommandLine(argc, argc_list)){
    ConfigManager * config_manager = new ConfigManager();

    config_manager->ReadConfig(argc_list[argc-1]);

    ConfigurationSimulator config_sim(config_manager);

    int rounds = 50; //Number of rounds of generation to simulate in test


    std::cout << "/*************************" << std::endl << std::endl;
    std::cout << "         STARTING" << std::endl;
    std::cout << "        SIMULATION" << std::endl;
    std::cout << "*************************/" << std::endl;

    config_sim.Start();  //   Call Start on ConfigurationSimulator

    std::cout << "/*************************" << std::endl << std::endl;
    std::cout << "           BEGIN" << std::endl;
    std::cout << "          UPDATING" << std::endl;
    std::cout << "*************************/" << std::endl;

    //   Start for loop, length of simulation (set by ourself)

    for (int i = 0; i < rounds; i++) {
      config_sim.Update(); //     Call Update on ConfigurationSimulator
    }

    std::cout << "/*************************" << std::endl << std::endl;
    std::cout << "        SIMULATION" << std::endl;
    std::cout << "         COMPLETE" << std::endl;
    std::cout << "*************************/" << std::endl;

  } else {
    UsageMessage();
  }




  return 0;
}
