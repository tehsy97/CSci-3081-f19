#include "bus.h"

Bus::Bus(int capacity, double speed) {
  passenger_max_capacity_ = capacity;
  speed_ = speed;
}


bool Bus::LoadPassenger(Passenger * new_passenger) {
  return true;
}