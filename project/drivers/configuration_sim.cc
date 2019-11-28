/**
 * @file configuration_sim.cc
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */

#include <iostream>
#include <fstream>
#include <exception>
#include <vector>
#include <string>
#include "src/config_manager.h"
#include "src/configuration_simulator.h"

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
  // char ** argc_list = argv;
  std::string filename;
  if (argc < 2) {
    filename = "config.txt";
  } else {
    filename = argv[1];
  }

  ConfigManager * config_manager = new ConfigManager();
  ConfigurationSimulator config_sim;

  // std::cout << config_sim.CheckCommandLine(argc, ("config/" + filename))
  //   << std::endl;
  // std::cout << "fdfadsf" << std::endl;
  if (!config_sim.CheckCommandLine(argc, ("config/" + filename))) {
    config_manager->ReadConfig("config.txt");
  } else {
    config_manager->ReadConfig(filename);
  }

  config_sim = ConfigurationSimulator(config_manager);

  int rounds = 50;  // Number of rounds of generation to simulate in test
  bool opened = false;
  std::fstream outfile;
  std::streambuf* stream_buffer_cout;
  std::streambuf* stream_buffer_file;

  for (int i = 2; i < argc; i++) {
    std::cout << "i:" << argv[i] << std::endl;
    int ret = config_sim.CheckOptionCommandLine(argv[i]);
    // std::cout << "fadasaf" << std::endl;
    switch (ret) {
      case 1:
      {
        // std::cout << "fadask;kl;kaf" << std::endl;
        rounds = atoi(argv[i]);
        // std::cout << "fadasfgfsdgsaf" << std::endl;
      }
      break;
      case 2:
      {
        // std::cout << "fa44235dasaf" << std::endl;
        outfile.open(argv[i], std::ios::out);
        if (!outfile.is_open()) {
          std::cout << "Fail to open file: " << argv[i] << std::endl;
          exit(0);
        }
        stream_buffer_cout = std::cout.rdbuf();
        stream_buffer_file = outfile.rdbuf();
        std::cout.rdbuf(stream_buffer_file);
        // std::cout << "fada09876543/2saf" << std::endl;
        opened = true;
      }
      break;
      default:
        break;
    }
      // std::cout << "fada0existf" << std::endl;
  }

  if (opened) {
    std::cout.rdbuf(stream_buffer_file);
  }

  std::cout << "/*************************" << std::endl << std::endl;
  std::cout << "         STARTING" << std::endl;
  std::cout << "        SIMULATION" << std::endl;
  std::cout << "*************************/" << std::endl;
  // std::cout << "faf" << std::endl;
  config_sim.Start();  //   Call Start on ConfigurationSimulator
  // std::cout << "fada0" << std::endl;
  std::cout << "/*************************" << std::endl << std::endl;
  std::cout << "           BEGIN" << std::endl;
  std::cout << "          UPDATING" << std::endl;
  std::cout << "*************************/" << std::endl;

  //   Start for loop, length of simulation (set by ourself)

  for (int i = 0; i < rounds; i++) {
    config_sim.Update();  //     Call Update on ConfigurationSimulator
  }

  std::cout << "/*************************" << std::endl << std::endl;
  std::cout << "        SIMULATION" << std::endl;
  std::cout << "         COMPLETE" << std::endl;
  std::cout << "*************************/" << std::endl;

  if (opened) {
    std::cout.rdbuf(stream_buffer_cout);
    outfile.close();
  }
  // std::cout << "end" << std::endl;
  return 0;
}
