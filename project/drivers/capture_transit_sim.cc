/**
 * @file capture_transit_sim.cc
 *
 * @copyright Shin Yin Teh, All rights reserved.
 */

#include <ctime>
#include <iostream>
#include <random>
#include <fstream>

#include "src/local_simulator.h"

int main(int argc, char**argv) {
  if (argc < 2) {
    std::cout << "Usage:";
    std::cout << " ../build/bin/capture_transit_sim <output_filename.txt>";
    std::cout << std::endl;
    exit(0);
  }

  std::fstream outfile;
  outfile.open(argv[1], std::ios::out);
  if (!outfile.is_open()) {
    std::cout << "Fail to open file: " << argv[1] << std::endl;
    exit(0);
  }

  std::streambuf* stream_buffer_cout = std::cout.rdbuf();
  std::streambuf* stream_buffer_file = outfile.rdbuf();
  std::cout.rdbuf(stream_buffer_file);

  int rounds = 50;  // Number of rounds of generation to simulate in test

  srand((int16_t)time(NULL));  // Seed the random number generator...

  LocalSimulator my_sim;

  std::cout << "/*************************" << std::endl << std::endl;
  std::cout << "         STARTING" << std::endl;
  std::cout << "        SIMULATION" << std::endl;
  std::cout << "*************************/" << std::endl;

  my_sim.Start();

  std::cout << "/*************************" << std::endl << std::endl;
  std::cout << "           BEGIN" << std::endl;
  std::cout << "          UPDATING" << std::endl;
  std::cout << "*************************/" << std::endl;

  for (int i = 0; i < rounds; i++) {
    my_sim.Update();
  }

  std::cout << "/*************************" << std::endl << std::endl;
  std::cout << "        SIMULATION" << std::endl;
  std::cout << "         COMPLETE" << std::endl;
  std::cout << "*************************/" << std::endl;

  std::cout.rdbuf(stream_buffer_cout);
//   std::cout << "this is capture" << std::endl;
  outfile.close();
  return 0;
}
