Common Tasks {#commontasks}
===========
# Introduction
A description about how to add a fuel functionality to the project.
<br/>

# Tutorial
Adding a fuel functionality to the project
won't be a too annoying process. We only need to add some changes to class Bus.
<br/>

1. In the bus.h, we need to add a new variable fuel to keep track of how many fuel left in the bus. In order to keeping track of the fuel, we can add some new functions for example CalculateFuel(), HasFuel(), and AddFuel().

2. In the bus.cc, we can call the function(s) we just implemented. The functionality of CalculateFuel() can be calculating the amount of fuel has used as the bus move. HasFuel() is use to check whether there is enough fuel for the bus to go to the next stop. AddFuel() is use to, well, add fuel to the bus.  

3. We need to make some minor changes to Update() in bus.cc so that the bus will stop, add fuel, or move as it needed.

4. Make the files again to generate the new library
bus.o. At this time, the bus should has the new 
property and stop and add fuel as needed in the project if it is implemented correctly.

Go to :<br/>
[Getting Started with Transit Simulator](@ref userpage) <br/>
[Developer Support](@ref developerpage)
