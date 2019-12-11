Getting Started with Transit Simulator {#userpage}
===========
# Introduction
Transit Simulator is a program that simulate the University Of Minnesota-Twin
Cities “GopherTrip” application which is available for download on Google
Play Store and on Apple App Store. Unlike GopherTrip application,
Transit Simulator will be running on a web server with some different
functionalities. Users will be able to adjust the number of time steps to
run and time steps between busses for route. The minimum number of time steps
to run is 1 and maximum is 50. The minimum time steps between busses for route
is 1 and maximum is 10.

# Graphical Mode
### Method 1: Run on VOLE or CSE labs machines
1. Navigate to base project directory
2. Make and start server:
```
$ cd src
$ make
$ cd ..
$ ./build/bin/vim_sim <port number>
```

3. Open a broswer you like and navigate to the following address:
```
http://127.0.0.1:<port_number>/web_graphics/project.html
```

4. Once you get to the simulation page, adjust the time steps and
time steps between busses to your desire number and then click the `Start` button. If you wish to run a time steps greater  than 50, you can refersh the browser, make adjustment, click the `start` button, and repeat. 


Notes: <br/>
* The port number can be anything but it is recommended to be in the range of 8000 to not multiples of 10.

* You must run 
```
$ ./build/bin/vim_sim <port_number>
``` 
at base project directory or it won't work properly. 

### Method 2: Using SSH
Firstly, SSH to cse labs machines using the following command:
```
ssh -L <port number>:127.0.0.1:<port_number> <x500>@<cse_labs_computer>.cselabs.umn.edu
```
Notes:
* The port number can be anything but it is recommended to be in the range of 8000 to not multiples of 10.

* <x500> is your Internet ID

* Refer to the following link to get the CSE Labs UNIX Machine Listings 
```
https://cseit.umn.edu/computer-classrooms/cse-labs-unix-machine-listings
```

After successfully connected to the CSE labs machine: <br/>
1. Navigate to base project directory 
2. make and start server:
```
$ cd src
$ make
$ cd ..
$ ./build/bin/vim_sim <port_number>
```
3. Open a broswer you like on your local machine and navigate to the following address:
```
http://127.0.0.1:<port_number>/web_graphics/project.html
```
4. Once you get to the simulation page, adjust the time steps and time steps between busses to your desire number and then click the `Start` button. If you wish to run a time steps greater  than 50, you can refersh the browser, make adjustment, click the `Start` button, and repeat. 

Notes: <br/>
* The port number can be anything but it is recommended to be in the range of 8000 to not multiples of 10.

* You must run 
```
$ ./build/bin/vim_sim <port_number>
``` 
at base project directory or it won't work properly.

# Configuration Mode
Configuration Mode gives users the abilities to redirect you output in a text file, specify the length of simulation, or both.

Usage: <br/>
```
$ ./build/bin/configuration_sim  <config_filename> [length of simulation] [text filename]
```

Notes: <br/>
* You must run 
```
$ ./build/bin/configuration_sim <config_filename>
```
at base project directory or it won't work properly.

* The default configuration file `config.txt` will be used unless user specifies to use configuration file stored in config directory.

* The default length of simulation is 50 unless user specified the length of simulation.

* By default the output will only show in the terminal unless user provides a text filename to store the output.

Go to:
[Developer Support](@ref developerpage)
