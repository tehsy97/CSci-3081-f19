/**
 * @file passenger.cc
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */


#include "src/passenger.h"

#include <iostream>
#include <string>

using namespace std;
int Passenger::count_ = 0;

// Passenger::Passenger(Stop * dest = NULL, std::string name = "Nobody") {
Passenger::Passenger(int destination_stop_id, std::string name): name_(name),
  destination_stop_id_(destination_stop_id), wait_at_stop_(0), time_on_bus_(0),
  id_(count_) {
  count_++;
}

void Passenger::Update() {
  if (IsOnBus()) {
    time_on_bus_ += 1;
  } else {
    wait_at_stop_ += 1;
  }
}

void Passenger::GetOnBus() {
  time_on_bus_ = 1;
}

int Passenger::GetTotalWait() const {
  return wait_at_stop_;
}

bool Passenger::IsOnBus() const {
  return time_on_bus_;
}

int Passenger::GetDestination() const {
  return destination_stop_id_;
}

void Passenger::Report() const {
  std::cout << "Name: " << name_ << std::endl;
  std::cout << "Destination: " << destination_stop_id_ << std::endl;
  std::cout << "Total Wait: " << GetTotalWait() << std::endl;
  std::cout << "\tWait at Stop: " << wait_at_stop_ << std::endl;
  std::cout << "\tTime on bus: " << time_on_bus_ << std::endl;
}
