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
#include <iostream>
#include <fstream>
#include "../src/passenger.h"

/******************************************************
* TEST FEATURE SetUp
*******************************************************/

class PassengerTests : public ::testing::Test {
 protected:
    Passenger* passenger;
    Passenger* passenger1;
    std::vector<Passenger *> passengers2;

    std::ofstream test_in;
    std::ifstream correct_out, test_out;
    std::string output, expected_output;

    virtual void SetUp() {
        passenger = new Passenger();
        passenger1 = new Passenger(33, "Zoe");

        passengers2.push_back(new Passenger(33, "Zoe"));
        passengers2.push_back(new Passenger(42, "Kaylee"));
        passengers2.push_back(new Passenger(50, "Wash"));
        passengers2.push_back(new Passenger(10, "Mal"));
        passengers2.push_back(new Passenger(23, "Jayne"));
    }

    virtual void TearDown() {
        delete passenger;
        delete passenger1;
    }
};

/*******************************************************************************
 * Test Cases
 ******************************************************************************/

TEST_F(PassengerTests, Constructor) {
    EXPECT_EQ(passenger->GetDestination(), -1);
	EXPECT_EQ(passenger1->GetDestination(), 33);
    EXPECT_EQ(passenger->IsOnBus(), false);
    passenger->GetOnBus();
    EXPECT_EQ(passenger->IsOnBus(), true);
}

TEST_F(PassengerTests, GetDestination) {
    EXPECT_EQ(passenger1->GetDestination(), 33);
}

TEST_F(PassengerTests, GetTotalWait) {
    EXPECT_EQ(passenger1->GetTotalWait(), 0);
    passenger1->GetOnBus();
    EXPECT_EQ(passenger1->GetTotalWait(), 1);
    passenger1->Update();
    EXPECT_EQ(passenger1->GetTotalWait(), 2);
}

TEST_F(PassengerTests, Update) {
    EXPECT_EQ(passenger1->IsOnBus(), false);
    passenger1->Update();
    EXPECT_EQ(passenger1->IsOnBus(), false);
    EXPECT_EQ(passenger1->GetWaitAtStop(), 1);
    passenger1->GetOnBus();
    EXPECT_EQ(passenger1->IsOnBus(), true);
    passenger1->Update();
    EXPECT_EQ(passenger1->GetWaitAtStop(), 1);
    EXPECT_EQ(passenger1->GetTotalWait(), 3);
}

TEST_F(PassengerTests, GetOnBus_and_IsOnBus) {
    EXPECT_EQ(passenger1->IsOnBus(), false);
    passenger1->GetOnBus();
    EXPECT_EQ(passenger1->IsOnBus(), true);
    // GetTotalWait - GetWaitAtStop = time_on_bus
    EXPECT_EQ((passenger1->GetTotalWait() - passenger1->GetWaitAtStop()), 1);
    passenger1->GetOnBus();
    EXPECT_EQ(passenger1->IsOnBus(), true);
    EXPECT_EQ((passenger1->GetTotalWait() - passenger1->GetWaitAtStop()), 1);
    passenger1->Update();
    EXPECT_EQ(passenger1->GetWaitAtStop(), 0);
    EXPECT_EQ(passenger1->GetTotalWait(), 2);
}


TEST_F(PassengerTests, passenger) {
    for (int time = 0; time < 60; time ++) {
        // if (time == 2) {
        //     EXPECT_EQ(passenger1->IsOnBus(), false);
        //     passenger1->GetOnBus();
        //     EXPECT_EQ(passenger1->IsOnBus(), true);
        // }

        // if(passenger1->GetDestination() != time){
        //     passenger1->Update();
        // } else {
        //     // EXPECT_EQ(passenger1->GetDestination(), 33);
        //     // EXPECT_EQ(passenger1->GetTotalWait(), 34);
        //     // EXPECT_EQ(passenger1->GetWaitAtStop(), 2);

        //     test_in.open ("../build/bin/gtest_out.txt");
        //     if (!test_in.is_open()) {
        //         std::cout << "Unable to open file: gtest_out.txt"
        //           << std::endl;
        //     }
        //     passenger1->Report(test_in);  //write output into file
        //     test_in.close();
        // }

        if (passenger1->GetDestination() != time) {
            passenger1->Update();
        } else {
            test_in.open("../build/bin/passenger_out.txt");
            if (!test_in.is_open()) {
                std::cout << "Unable to open file: passenger_out.txt" << std::endl;
            }
            passenger1->GetOnBus();
            passenger1->Report(test_in);  // write output into file
            test_in.close();
        }
    }

    correct_out.open("correct_passenger_out.txt");
    if (!correct_out.is_open()) {
        std::cout << "Unable to open file: correct_passenger_out.txt" << std::endl;
    }

    test_out.open("../build/bin/passenger_out.txt");
    if (!test_out.is_open()) {
        std::cout << "Unable to open file: passenger_out.txt" << std::endl;
    }

    // while(!test_out.eof() && !correct_out.eof()){
    //     test_out >> output;
    //     correct_out >> expected_output;
    //     EXPECT_EQ(output, expected_output);
    // }

    while (getline(test_out, output) &&
      getline(correct_out, expected_output)) {
        // std::cout << output << std::endl;
        // std::cout << expected_output << std::endl;
        EXPECT_EQ(output, expected_output);
    }
    test_out.close();
    correct_out.close();
}

TEST_F(PassengerTests, passenger_list) {
    test_in.open("../build/bin/passenger_out_list.txt");
    if (!test_in.is_open()) {
        std::cout << "Unable to open file: passenger_out_list.txt to write"
          << std::endl;
    }

    for (int time = 0; time < 60; time ++) {
        // if (time == 2) {
        //     EXPECT_EQ(passengers2[0]->IsOnBus(), false);
        //     passengers2[0]->GetOnBus();
        //     EXPECT_EQ(passengers2[0]->IsOnBus(), true);
        // }
        // else if (time == 5) {
        //     EXPECT_EQ(passengers2[1]->IsOnBus(), false);
        //     passengers2[1]->GetOnBus();
        //     EXPECT_EQ(passengers2[1]->IsOnBus(), true);
        // }
        // else if (time == 8) {
        //     EXPECT_EQ(passengers2[2]->IsOnBus(), false);
        //     passengers2[2]->GetOnBus();
        //     EXPECT_EQ(passengers2[2]->IsOnBus(), true);
        // }
        // else if (time == 9) {
        //     EXPECT_EQ(passengers2[3]->IsOnBus(), false);
        //     passengers2[3]->GetOnBus();
        //     EXPECT_EQ(passengers2[3]->IsOnBus(), true);
        // }
        // else if (time == 11) {
        //     EXPECT_EQ(passengers2[4]->IsOnBus(), false);
        //     passengers2[4]->GetOnBus();
        //     EXPECT_EQ(passengers2[4]->IsOnBus(), true);
        // }

        for (std::vector<Passenger *>::iterator it = passengers2.begin();
          it != passengers2.end(); it++) {
            if ((*it)->GetDestination() != time) {
            (*it)->Update();
            } else {
                Passenger * departing_passenger = *it;
                departing_passenger->GetOnBus();
                departing_passenger->Report(test_in);

                // When removing the passenger, the iterator gets incremented
                // to the next element.
                // We need to push it back so that the for loop increment
                // places the iterator at the correct next element.
                it = passengers2.erase(it);
                it--;
                delete departing_passenger;
            }
        }
    }
    test_in.close();

    correct_out.open("correct_passenger_out_list.txt");
    if (!correct_out.is_open()) {
        std::cout << "Unable to open file: correct_passenger_out_list.txt" << std::endl;
    }

    test_out.open("../build/bin/passenger_out_list.txt");
    if (!test_out.is_open()) {
        std::cout << "Unable to open file: passenger_out_list.txt to read"
          << std::endl;
    }

    // while(!test_out.eof() && !correct_out.eof()){
    //     test_out >> output;
    //     correct_out >> expected_output;
    //     EXPECT_EQ(output, expected_output);
    // }

    while (getline(test_out, output) &&
      getline(correct_out, expected_output)) {
        // std::cout << output << std::endl;
        // std::cout << expected_output << std::endl;
        EXPECT_EQ(expected_output, output);
    }
    test_out.close();
    correct_out.close();
}
