#ifndef BUS_H
#define BUS_H

#include <list>

#include "passenger.h"

class Bus {
 public:
  /*Replacing for testing*/
  //Bus(int capacity, double speed, Route * out, Route * in);
  Bus(int capacity = 60, double speed = 1);
  bool LoadPassenger(Passenger *); 	//returning revenue delta
 private:
  int passenger_max_capacity_;
  double speed_;						//could also be called "distance travelled in one time step"
};
#endif