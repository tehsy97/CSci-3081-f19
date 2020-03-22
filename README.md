# CSci 3081 Transit System Simulator

Welcome to my CSci 3081W Project!

Transit System Simulation project writen in C++ programming language. This software project is to develop a transit simultor which simulations can be controlled via external configuration (without code change) and be visualized within a graphics window.

It will be running on a web server with some different functionalities. Users will be able to adjust the number of time steps to run and time steps between busses for route. The minimum number of time steps to run is 1 and maximum is 50. The minimum time steps between busses for route is 1 and maximum is 10.

### Running the Simulator:
```
$ cd project
```

#### Method 1: Step by step for CSE Labs or vole users

**<port_number> can be anything. Try and pick numbers above 8000 and not multiples of 10.**

1. Navigate to base project directory(project/)  
2. Make and start server:
```
$ cd src
$ make <sim target>
$ cd ..
$./build/bin/<sim executable> <port_number>
```
#### You must run by doing `./build/bin/<sim executable> <port_number>`.
#### You _cannot_ cd to bin/ and run `./<sim executable> <port_number>`
3. Navigate to the following address on your VOLE browser (Firefox/Chrome):
```
http://127.0.0.1:<port_number>/web_graphics/project.html
```
4. Once you get to the simulation page, adjust the time steps and time steps between busses to your desire number and then click the `Start` button. If you wish to run a time steps greater than 50, you can refersh the browser, make adjustment, click the `start` button and repeat. 

#### Method 2: Step by step for ssh users
You can SSH using a Windows machine with Git Bash.
```
ssh -L <port number>:127.0.0.1:<port_number> <x500>@<cse_labs_computer>.cselabs.umn.edu
```
**<port_number> can be anything. Try and pick numbers above 8000 and not multiples of 10.**

1. Navigate to base project directory(project/)  
2. make and start server:
```
$ cd src
$ make <sim target>
$ cd ..
$./build/bin/<sim executable> <port_number>
```
#### You must run by doing `./build/bin/<sim executable> <port_number>`.
#### You _cannot_ cd to bin/ and run `./<sim executable> <port_number>`
3. Navigate to the following address on your LOCAL machine using your LOCAL browser (Firefox/Chrome):
```
http://127.0.0.1:<port_number>/web_graphics/project.html
```
4. Once you get to the simulation page, adjust the time steps and time steps between busses to your desire number and then click the `Start` button. If you wish to run a time steps greater than 50, you can refersh the browser, make adjustment, click the `start` button and repeat. 

If you run `./build/bin/configuration_sim  <config_filename>`, you need to specify the configuration file that is store in config directory. Otherwise, the default `config.txt` will be used. 

Running configuration_sim give you options to redirect you output in a text file, specify the length of simulation, or both. In order to do that run the following command:
```
./build/bin/configuration_sim <config_filename> [length of simulation] [outputfile]
```

### Run Tests:

- cd `project\tests`
- `make`
- `../build/bin/unittest`

### Style Check:

- `[path_to_cpplint]/cpplint/cpplint-cse.sh --root=[path_target_dir] [file_name]`

