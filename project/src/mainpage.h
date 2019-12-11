/**
 * @file mainpage.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */

#ifndef SRC_MAINPAGE_H_
#define SRC_MAINPAGE_H_

/*! \mainpage Csci 3081_2019 Transit Simulator
 *
 * \section Introduction
 * Transit Simulator is a program that simulate the University Of Minnesota-Twin
 * Cities “GopherTrip” application which is available for download on Google
 * Play Store and on Apple App Store. Unlike GopherTrip application,
 * Transit Simulator will be running on a web server with some different
 * functionalities. Users will be able to adjust the number of time steps to
 * run and time steps between busses for route. The minimum number of time steps
 * to run is 1 and maximum is 50. The minimum time steps between busses for route
 * is 1 and maximum is 10.
 *
 * \section  User Guide
 * \subsection  Running the Simulator
 * \subsection Method 1 Run on VOLE or CSE labs machines
 * 1. Navigate to base project directory
 * 2. Make and start server:
 * 
 * ```
 * $ cd src
 * $ make <sim targer>
 * $ cd ..
 * $ ./build/bin/<sim executable> <port number>
 * ```
 * 
 * Notes:
 * i. The port number can be anything but it is recommended to be in
 * the range of 8000 to not multiples of 10.
 * 
 * ii. You must run `./build/bin/<sim executable> <port_number>` 
 * at base project directory or it won't work. 
 * 
 * 3. Open a broswer you like and navigate to the following address:
 * ```
 * http://127.0.0.1:<port_number>/web_graphics/project.html
 * ```
 * 
 * 4. Once you get to the simulation page, adjust the time steps and
 * time steps between busses to your desire number and then click
 * the `Start` button. If you wish to run a time steps greater 
 * than 50, you can refersh the browser, make adjustment, click
 * the `start` button and repeat. 
 * 
 * \subsection Method 2 Using SSH
 * 1. SSH to cse labs machines using the following command:
 * ```
 * ssh -L <port number>:127.0.0.1:<port_number> <x500>@<cse_labs_computer>.cselabs.umn.edu
 * ```
 * 
 * Notes:
 * i. The port number can be anything but it is recommended to be in
 * the range of 8000 to not multiples of 10.
 * 
 * ii. <x500> is your Internet ID
 * 
 * iii. Refer to the following link to get the CSE Labs UNIX
 * Machine Listings 
 * ```
 * https://cseit.umn.edu/computer-classrooms/cse-labs-unix-machine-listings
 * ```
 *
 * After successfully connected to the CSE labs machine:
 * 1. Navigate to base project directory 
 * 2. make and start server:
 * ```
 * $ cd src
 * $ make <sim target>
 * $ cd ..
 * $ ./build/bin/<sim executable> <port_number>
 * ```
 * 
 * Notes:
 * i. The port number can be anything but it is recommended to be in
 * the range of 8000 to not multiples of 10.
 * 
 * ii. You must run `./build/bin/<sim executable> <port_number>` 
 * at base project directory or it won't work. 
 * 
 * 3. Open a broswer you like on your local machine and navigate to the following address:
 * ```
 * http://127.0.0.1:<port_number>/web_graphics/project.html
 * ```
 * 4. Once you get to the simulation page, adjust the time steps and
 * time steps between busses to your desire number and then click
 * the `Start` button. If you wish to run a time steps greater 
 * than 50, you can refersh the browser, make adjustment, click
 * the `start` button and repeat. 
 * 
 * If you run `./build/bin/configuration_sim  <config_filename>`, you need to specify 
 * the configuration file that is store in config directory. Otherwise, the default `config.txt`
 * will be used. 
 * 
 * Running configuration_sim give you options to redirect you output in a text file, specify 
 * the length of simulation, or both. In order to do that run the following command:
 * ```
 * ./build/bin/configuration_sim <config_filename> [length of simulation] [outputfile]
 * ```
 * 
 * 
 * \section Classes
 * Class Bus, Route, Stop, and Passenger has a special relationship. Every time Bus class calls its Update(),
 * it will trigger Update() in Passneger to update the passengers time on bus. It will also call functions in
 * Route such as GetDestinationStop(), GetNextStop(), and etc depends on the bus and passnger status (the bus
 * should not stop if there is no passenger to load or unload and the speed is fast that it should skip a stop
 * or it should if there are passenger to load and unload regradless of the speed and if the distance remaning
 * to stop is zero or a negative number.) 
 *   
 * \subsection Simulator
 * The purpose of Simulator class is to start the Transit Simulator by creating buses,
 * stops, routes, distance between routes and passengers. Start() and Update() functions
 * are a pure virtual boolean function that implemented in LocalSimulator.
 *
 * \subsection LocalSimulator
 * LocalSimulator class is the child of Simulator. Start() will create routes with stops and generates passengers.
 * Update() will update passengers, stops, and buses status for each simulation time.
 *
 * \subsection PassengerFactory
 * PassengerFactory class is the main class that generates passengers. It generates a
 * passenger with a randomized name and random destination with bounds when
 * Generate(curr_stop, last_stop) is called each time. In order to set the bound
 * , pass in currect stop id and last stop id into the function. The function
 * will return Passenger object with name and destination
 *
 * \subsection PassengerGenerator
 * PassengerGenerator is a constructor that constructs a passenger generator with a list of
 * propabilities and a list of stops called generation_probabilities_ and stops_
 * respectively.
 *
 * GeneratePassengers() is a pure virtual function in Passenger Generator. It is
 * is implemented in RamdomPassengerGenerator class. It will return number of
 * passenger has been generated.
 *
 * \subsection RandomPassengerGenerator
 * RandomPassengerGenerator class is inheritance of PassengerGenerator class.
 *
 * RandomPassengerGenerator constructor constructs a random passenger generator
 * with a list of probabilities and a list of stops called probs and stops respectively.
 *
 * GeneratePassengers() will randomly generates passengers for each stops
 * according to propabilities and return number of passenger generated. After calling the Generate function from
 * PassengerFactory to generate a passenger, it will add the passenger to current stop by
 * calling Stop AddPassengers(passenger) which takes in a passenger and add to the Stop passenger list.

 * \subsection Passenger
 * Passenger class is a simple class that with several functions that used update
 * and get passengers status and information. It is also used to test to see if the program works well.
 * Each time the Update() function is called, passengers time status on bus or at stop will be updated.
 * This function will be called in Stop Update() and Bus Update().
 *
 * \subsection Stop
 * Stop class is a class that form a route. It will also update the passengers
 * status at stop when its Update function is called. Each stops has an unique id and longitude and latitude based on real world location. To load passengers on bus,
 * a bus is passed into the LoadPassengers(bus) when it is called. Stop LoadPassengers will call Bus LoadPassenger to add passengers at the stop
 * onto the bus when bus arrived and there is spaces. It will number of passengers add to Bus and delete passengers loaded onto the bus from Stop passenger list.
 * Report function will print the stops status and the output can be redirect to a file.
 *
 * \subsection Route
 * Route class is a class that keeps a list of stops. Each route has a name, a list of stops, a list of distances between each stops, number of stops.
 * It can also generate passengers by using PassengerGenerator* generator_. Similar to Stop Report, Report function will print the stops status
 * and the output can be redirect to a file. Route has a clone methods will deep copy constructor. Route Update() will update each stops in the route
 * and stops will update passengers status in each stops.
 *
 *\subsection Bus
 * Bus class, like the buses in real world, has passengers, outgoing and incoming routes, speed, and name.
 * It will move based on its speed and stop at every stops. When Update function is called the bus will move closer to the next stop.
 * It will load and unload passengers at stops by calling stops' Update function. Once the bus completes its outgoing and incoming
 * routes it will be deleted. 
 * 
 * <a href="UML_FINAL_1.pdf" target="_blank"><b>UML Diagram</b></a>
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
 * \subsubsection classes Primary Classes
 * Below is a list of primary classes in this program
 * <ul>
 * <li> Bus
 * <li> Passenger
 * <li> Route
 * <li> Stop
 * </ul>
 * 
 */
#endif  // SRC_MAINPAGE_H_
