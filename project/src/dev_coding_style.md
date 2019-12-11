Coding Style {#codingstyle}
===========

This project uses Google Coding Style. Here I include some important rules of coding style I apply when I was implementing this project. More details about to Google Style can be found at [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html).

## Comments Rules / Techniques
* Avoid unnecessary comments <br/>
The comment below can be removed since it is just repeating the code.
```
// Get the name of the route
std::string Route::GetName() {
  return name_;
}
```

* Use endline comments appropriately. Do not repeat the meaning of the code again.
```
std::list<double> distances_between_;  // length = num_stops_ - 1
int destination_stop_index_;  // always starts at zero, no init needed
```

* Comment at the paragraph of code level <br/>
Most of the time, we only need to state the functionality of the code or the meaning of the code. We do not need to explain every line of code. <br/>
For example: <br/>
```
// probability of last stop of routes will always be zero
if (!probs.empty()) {
probs.pop_back();
probs.push_back(0);
}
```

* Focus comments on WHY not HOW <br/>
Don't need to explain how code work if the it is clearly using naming convention
and non-tricky code because it is readable for other developers. However, we
do need to explain why it works or written in this way to explain to the other developers.
```
int passenger_unloaded = UnloadPassenger(stop_arrived_at->GetId());
bool passenger_loaded = stop_arrived_at->LoadPassengers(this);

// if there is passengers to load or unload, then update bus status (How) 
if (passenger_loaded || passenger_unloaded) {
    UpdateBusData();
    ...
}

// Update bus status because passengers are loaded or unloaded (Why) 
if (passenger_loaded || passenger_unloaded) {
    UpdateBusData();
    ...
}
```
<br/>

## Naming conventions
* General Naming Rules <br/>
  * Use descriptive names as much as possible so that developers can easily 
    understand the code.
  * Try not to use abbreviations because it might be ambiguous and developers might be unfamiliar to what it means.
    Developers who are new to the project may have hard time to understand the code.
  * Only use abbreviation if it is well-known. 
<br/>
For example:
```
int num_stops_;;  // "num" is a well-known convention.
std::list<double> distances_between_;  // No abbreviation.
```

* Variable Names <br/>
The names of variables (including those in a function parameters) and data members are all
lowercase, with underscores between words if it is more than one word. Data members of classes
(but not structs) usually have an addition trailing underscores.
<br/>
For example:
```
string passengers_;   // OK - all lowercase.
string distances_between_;  // OK - uses underscore.
string distancesBetween;   // Bad - mixed cases.
```
<br/>

## File names and content, directory layout
* File Names <br/>
Filenames should be all lowercase and can include underscores `_` or dashes `-`.
<br/>
For example:
```
local_simulator.cc
local-simulator.cc
localsimulator.cc
passenger_UT.cc // _unittest and _regtest are deprecated.
```
<br/>

## Use of whitespace

* Use of horizontal whitespace is depends on location. However, no whitespace at the end of a line.
<br/>
For example:
```
Route * Bus::CheckInOrOutRoute() { // Open braces should always have a space before them. 
  if (outgoing_route_->IsAtEnd()) {  // Open braces "(" should always have a 
                                     // space before them and close braces ")"
                                     // should always have a space after them 
                                     // unless it is a function call. 
    return incoming_route_;
  }
  return outgoing_route_;
}
  ...
int i = 0;  // Semicolons usually have no space before them.

int i = 0;  // For inline comment, there should 
            //have two spaces after the semicolon and one space after "//". 
```

## Include the directory of the file that you want to include.

For example:
```
#include "src/bus.h"  - OK, include the directory file "src"
#include "./bus.h"  - OK, include "./"
#include "bus.h"  - Bad, no prefix
```

<br/>

More details realted to Google Style can be found at [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html).

Go to :<br/>
[Getting Started with Transit Simulator](@ref userpage) <br/>
[Developer Support](@ref developerpage)
