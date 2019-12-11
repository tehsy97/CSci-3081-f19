High-Level Design {#highleveldesign}
===========

# Introduction
This project is about Transit Simulator. It is a program that simulate the
University Of Minnesota-Twin Cities “GopherTrip” application which is available
for download on Google Play Store and on Apple App Store. Unlike GopherTrip
application, Transit Simulator will be running on a web server with some different
functionalities. Users will be able to adjust the number of time steps to
run and time steps between busses for route. The minimum number of time steps
to run is 1 and maximum is 50. The minimum time steps between busses for route
is 1 and maximum is 10.
<br/>

#High-level design
Class Bus, Route, Stop, and Passenger has a special relationship. Every time Bus class calls its Update(),
it will trigger Update() in Passneger to update the passengers time on bus. It will also call functions in
Route such as GetDestinationStop(), GetNextStop(), and etc depends on the bus and passnger status (the bus
should not stop if there is no passenger to load or unload and the speed is fast that it should skip a stop
or it should if there are passenger to load and unload regradless of the speed and if the distance remaning
to stop is zero or a negative number.) The Update() in class route will update the Stops that build the route
and trigger the Update() in class Stop and update the passengers at those stops by calling Update() in class
Passenger. The process of updating the route, stop,and passenger happends at the same time. 
<br/>

# Incide the Source directory (SRC)
### Simulator
The purpose of Simulator class is to start the Transit Simulator by creating buses,
stops, routes, distance between routes and passengers. Start() and Update() functions
are a pure virtual boolean function that implemented in LocalSimulator. 
<br/>

### LocalSimulator
LocalSimulator class is the child of Simulator. Start() will create routes with stops and generates passengers.
Update() will update passengers, stops, and buses status for each simulation time.
<br/>

### PassengerFactory
PassengerFactory class is the main class that generates passengers. It generates a
passenger with a randomized name and random destination with bounds when
Generate(curr_stop, last_stop) is called each time. In order to set the bound, pass
in currect stop id and last stop id into the function. The function
will return Passenger object with name and destination.
<br/>

### PassengerGenerator
PassengerGenerator is a constructor that constructs a passenger generator with a list of
propabilities and a list of stops called generation_probabilities_ and stops_
respectively.
<br/>

GeneratePassengers() is a pure virtual function in Passenger Generator. It is
is implemented in RamdomPassengerGenerator class. It will return number of
passenger has been generated.
<br/>

### RandomPassengerGenerator
RandomPassengerGenerator class is inheritance of PassengerGenerator class.
<br/>

RandomPassengerGenerator constructor constructs a random passenger generator
with a list of probabilities and a list of stops called probs and stops respectively.
<br/>

GeneratePassengers() will randomly generates passengers for each stops
according to propabilities and return number of passenger generated. After calling the Generate function from
PassengerFactory to generate a passenger, it will add the passenger to current stop by
calling Stop AddPassengers(passenger) which takes in a passenger and add to the Stop passenger list.
<br/>

### Passenger
Passenger class is a simple class that with several functions that used update
and get passengers status and information. It is also used to test to see if the program works well.
Each time the Update() function is called, passengers time status on bus or at stop will be updated.
This function will be called in Stop Update() and Bus Update().
<br/>

### Stop
Stop class is a class that form a route. It will also update the passengers
status at stop when its Update function is called. Each stops has an unique
id and longitude and latitude based on real world location. To load passengers
on bus, a bus is passed into the LoadPassengers(bus) when it is called. Stop
LoadPassengers will call Bus LoadPassenger to add passengers at the stop
onto the bus when bus arrived and there is spaces. It will number of passengers
add to Bus and delete passengers loaded onto the bus from Stop   passenger list.
Report function will print the stops status and the output can be redirect to a file.
<br/>

### Route
Route class is a class that keeps a list of stops. Each route has a name, a list of
stops, a list of distances between each stops, number of stops. It can also generate
passengers by using PassengerGenerator* generator_. Similar to Stop Report, Report
function will print the stops status and the output can be redirect to a file.
Route has a clone methods will deep copy constructor. Route Update() will update each
stops in the route and stops will update passengers status in each stops.
<br/>

### Bus
Bus class, like the buses in real world, has passengers, outgoing and incoming routes, speed, and name.
It will move based on its speed and stop at every stops. When Update function is called the bus will move closer to the next stop.
It will load and unload passengers at stops by calling stops' Update function. Once the bus completes its outgoing and incoming
routes it will be deleted. 
<br/>

<a href="UML_FINAL_1.pdf" target="_blank"><b>UML Diagram</b></a>

UML diagrams of the class structure can be viewed by directing
to project folder and run the following command:
```
$ cd <path>/project/docs
$ doxygen Doxyfile
```

Open the docs/html folder and open index.html, a html webpage will shown. <br/>
Select "Classes" from dropdown menu and click "Class Hierarchy".
 <br/>
 
### classes Primary Classes
Below is a list of primary classes in this program: <br/>
* Bus
* Passenger
* Route
* Stop

Go to :<br/>
[Getting Started with Transit Simulator](@ref userpage) <br/>
[Developer Support](@ref developerpage)