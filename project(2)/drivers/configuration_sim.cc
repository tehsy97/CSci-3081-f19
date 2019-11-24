/**
 * @file configuration_sim.cc
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#include "src/config_manager.h"
#include "src/configuration_simulator.h"


int main(int argc, char**argv) {
  // NOTE: this usage will change depending on
  //       how you build your config_sim classes
  //   E.g., how will you handle getting the length of simulation value?
  std::cout << "Usage: ./build/bin/configuration_sim <config_filename>";
  std::cout << std::endl;

  // Check command line params for config file name
  if (argc < 2){
    std::cout << "Usage: ./build/bin/configuration_sim <config_filename>";
    std::cout << std::endl;
    exit(0);
  }


  ConfigManager* cm = new ConfigManager(); //   Create ConfigManager
  
  cm->ReadConfig(argv[1]);   //   Call ReadConfig

  ConfigurationSimulator my_sim(cm); //   Create ConfigurationSimulator

  int rounds = 50; //Number of rounds of generation to simulate in test
  
  
  std::cout << "/*************************" << std::endl << std::endl;
  std::cout << "         STARTING" << std::endl;
  std::cout << "        SIMULATION" << std::endl;
  std::cout << "*************************/" << std::endl;
  
  my_sim.Start();  //   Call Start on ConfigurationSimulator
  
  std::cout << "/*************************" << std::endl << std::endl;
  std::cout << "           BEGIN" << std::endl;
  std::cout << "          UPDATING" << std::endl;
  std::cout << "*************************/" << std::endl;
  
  //   Start for loop, length of simulation (set by ourself)

  for (int i = 0; i < rounds; i++) {
	  my_sim.Update(); //     Call Update on ConfigurationSimulator
  }
  
  std::cout << "/*************************" << std::endl << std::endl;
  std::cout << "        SIMULATION" << std::endl;
  std::cout << "         COMPLETE" << std::endl;
  std::cout << "*************************/" << std::endl;
  


    


  return 0;
}

