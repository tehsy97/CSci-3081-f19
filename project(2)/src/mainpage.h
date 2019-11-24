#ifndef SRC_MAINPAGE_H_
#define SRC_MAINPAGE_H_
/**
 * @file mainpage.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */


 /*! \mainpage CSCI3081 TransitSim Documentation
  *
  * \subsection Introduction Background
  * Bus simulator program is a project try to simulate University of Minnesota, Twin Cities
  * campus Bus system.
  * This project is comprised of four main parts: Bus class, Passenger
  * class, Route class and Stop class.
  *
  * \section Classes Classes
  *
  * Bus class try to have more eneties that a real bus has, such as name, speed,
  * Passengers, route leading it. It need to move and connect all the other
  * classes in this project, liking what real bus would do in daily life.
  * Modification of this class should be done in bus.h and
  * bus.cc. The critical method to watch out for is Update(),
  * which handles loading and unloading passenger, detecting it reach stop,
  * switching in and out route, and making the bus move.
  *
  * Stop is class that form the route class. It uses longtitude and lantitude
  * to have a real world location, id to identify and
  * passenger can show up in that class and waiting bus. Having LoadPassengers
  * Function can help to load passenger on bus, just like a real world senario,
  * which wll use Bus object as varabile, and return number of passengeer
  * \code{.sh}
  * int Stop::LoadPassengers(Bus * bus) {
  * ...
  * }
  * \endcode
  *
  * Route class contains different stops objects, which makes bus's route.
  * Becasue Bus and Stop's realtioship is aggeragation. So the critical method
  * to make sure Stop and Route can share some info and work together, but still isolated
  * in someway is Route * Clone()
  * \code{.sh}
  * Route * Route::Clone() {
  * Stop ** stops_c2 = new Stop *[num_stops_];
  * double * distances_c2 = new double[(num_stops_ - 1)];
  * int i = 0;
  * int j = 0;
  *
  * for (std::list<Stop *>::iterator it = stops_.begin();
  * it != stops_.end(); it++) {
  *    stops_c2[i] = *it;
  *   i++;
  * }
  *
  * for (std::list<double>::iterator it = distances_between_.begin();
  * it != distances_between_.end(); it++) {
  * distances_c2[j] = *it;
  *  j++;
  * }
  *
  * Route * route_c2 = new Route (name_, stops_c2, distances_c2,
  * num_stops_, generator_);
  * return route_c2;
  * }
  * \endcode
  * This method can handle this problem. And also other important methods are
  * Route::GetNextStopDistance() which might need to be perfected in the feature.
  *
  *
  *
  * Passenger class is designed to tested the system. It has names, and destination,
  * etc, which can test how accurate of the system. But it could be a problem if
  * designed don't know how to use it. So far we can Keep it as simple as possible.
  *
  * \subsection executing Compiling and Executing
  * First, open the terminal and navigate to the location of the project/src folder.
  * \code{.sh}
  * cd <path>/project/src
  * \endcode
  * Then run make command to compile the project
  * \code{.sh}
  * make
  * \endcode
  * The excutables is named to transit_sim, locate it by specifing path
  * \code{.sh}
  * ./../build/bin/transit_sim
  * \endcode
  *
  * UML diagrams of the class structure can be viewed by directing
  * to project folder and run the following command
  * \code{.sh}
  * cd <path>/project/docs
  * doxygen Doxyfile
  * \endcode
  * Open the docs/html folder and open index.html, a html webpage will shown.
  * Select "Classes" from dropdown menu and click "Class Hierarchy".
  *
  *
  * \subsubsection classes Primary Classes
  * Below is a list of primary classes in this program
  * <ul>
  * <li> Bus
  * <li> Passenger
  * <li> Route
  * <li> Stop
  * </ul>
  */

#endif  // SRC_MAINPAGE_H_
