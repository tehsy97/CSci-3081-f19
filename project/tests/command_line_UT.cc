/**
 * @file passengers_UT.cc
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */

/* STUDENTS: YOU MUST ADD YOUR PASSENGER UNIT TESTS TO THIS FILE. FORMAT YOUR
 * TESTS TO FIT THE SPECIFICATIONS GIVEN BY THE TESTS PROVIDED IN THIS FILE.
 *
 * Please note, the assessment tests for grading, will use the same include
 * files, class names, and function names for accessing students' code that you
 * find in this file.  So students, if you write your code so that it passes
 * these feedback tests, you can be assured that the auto-grader will at least
 * be able to properly link with your code.
 */

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <gtest/gtest.h>
#include <math.h>
#include <string>
#include <vector>
#include <iostream>
#include "../src/configuration_simulator.h"

/******************************************************
* TEST FEATURE SetUp
*******************************************************/

class CommandLine : public ::testing::Test {
 protected:

    ConfigurationSimulator config_sim;
    std::string filename = "../config/config.txt";
    std::string wrongname = "../config/output.txt";
    std::string usage = std::string("Usage: ") +
      "./build/bin/configuration_sim <config_filename> [length of simulation] [outputfile]\n";

    std::string wrongfile = std::string("Error opening file: ") + wrongname +
      "\nDefault configuration file will be used.\n";

    std::string nofile = usage +
      "Default configuration file will be used.\n";


    virtual void SetUp() {
      ConfigurationSimulator config_sim = ConfigurationSimulator();
      
    }

    virtual void TearDown() {
    
    }
};

/*******************************************************************************
 * Test Cases
 ******************************************************************************/

TEST_F(CommandLine, UsageMessageTest) {
    testing::internal::CaptureStdout();
    config_sim.UsageMessage();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, usage);
}

TEST_F(CommandLine, CommandLineTests) {
    
    bool result = config_sim.CheckCommandLine(2, filename);
    EXPECT_EQ(result, true);
    
    testing::internal::CaptureStdout();
    result = config_sim.CheckCommandLine(2, wrongname);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(result, false);
    EXPECT_EQ(output, wrongfile);

    testing::internal::CaptureStdout();
    result = config_sim.CheckCommandLine(1, "");
    output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(result, false);
    EXPECT_EQ(output, nofile);

    EXPECT_EQ(config_sim.CheckOptionCommandLine("50"), 1);
    EXPECT_EQ(config_sim.CheckOptionCommandLine("../build/bin/output.txt"), 2); 
}
