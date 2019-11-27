**NOTE**: Please make sure that **all Tests** pass before pushing any changes. 

### Run Tests:

- cd `tests`
- `make`
- `../build/bin/unittest`

### Style Check:

- `[path_to_cpplint]/cpplint/cpplint-cse.sh --root=[path_target_dir] [file_name]`


### Running the Simulator:

#### Step by step for vole users

##### Vole/Vole3D:  
###### <port_number> can be anything. Try and pick above 8000 and not multiples of 10.  
Navigate to base project directory(project/)  
make and start server (./build/bin/transit_sim <port_number>)  
Navigate to the following address on your VOLE browser (Firefox/Chrome):
```
http://127.0.0.1:<port_number>/web_graphics/project.html
```
  
#### Step by step for ssh users
##### SSH with Git Bash:  
###### <port_number> can be anything. Try and pick above 8000 and not multiples of 10.  
```
ssh -L <port number>:127.0.0.1:<port_number> <x500>@<cse_labs_computer>.cselabs.umn.edu
```
Navigate to base project directory(project/)  
make and start server (./build/bin/transit_sim <port_number>)  
Navigate to the following address on your LOCAL (Your personal machine) browser (Firefox/Chrome):
```
http://127.0.0.1:<port_number>/web_graphics/project.html
```
