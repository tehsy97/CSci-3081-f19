### Feedback for Iteration 1

Run on November 07, 10:08:24 AM.

<hr>

This feedback is being batched and will run every few hours. Note that these feedback tests are a *work in progress* and will likely be updated to contain more tests as they are developed. Check back periodically for more feedback. Take note that these tests are _incredibly slow_ because of the time it takes to compile 4 executables.

<hr>


### Basic Tests on Devel

+ Pass: Checkout devel branch.




#### Necessary Files and Structure

+ Pass: Check that directory "project" exists.

+ Pass: Check that directory "project/src" exists.

+ Pass: Check that directory "project/tests" exists.


#### Compilation Tests

+ Pass: Change into directory "project".

+ Pass: Copy file "Copying official project makefile".



+ Pass: Copy file "Copying official src makefile".



+ Pass: Copy file "Copying official tests makefile".



+ Pass: Check that make compiles.



+ Pass: Check that file "build/bin/transit_sim" exists.

+ Pass: Change into directory "tests".

+ Fail: Check that make compiles.

    Make compile fails with errors:.
<pre>==== Auto-Generating Dependencies for ../src/local_simulator.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/tests/local_simulator.d -MP -MT ../build/obj/tests/local_simulator.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include   -std=c++11 ../src/local_simulator.cc
==== Compiling ../src/local_simulator.cc into ../build/obj/tests/local_simulator.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include   -std=c++11  -c -o  ../build/obj/tests/local_simulator.o ../src/local_simulator.cc
==== Auto-Generating Dependencies for ../src/bus.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/tests/bus.d -MP -MT ../build/obj/tests/bus.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include   -std=c++11 ../src/bus.cc
==== Compiling ../src/bus.cc into ../build/obj/tests/bus.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include   -std=c++11  -c -o  ../build/obj/tests/bus.o ../src/bus.cc
==== Auto-Generating Dependencies for ../src/random_passenger_generator.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/tests/random_passenger_generator.d -MP -MT ../build/obj/tests/random_passenger_generator.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include   -std=c++11 ../src/random_passenger_generator.cc
==== Compiling ../src/random_passenger_generator.cc into ../build/obj/tests/random_passenger_generator.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include   -std=c++11  -c -o  ../build/obj/tests/random_passenger_generator.o ../src/random_passenger_generator.cc
==== Auto-Generating Dependencies for ../src/passenger.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/tests/passenger.d -MP -MT ../build/obj/tests/passenger.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include   -std=c++11 ../src/passenger.cc
==== Compiling ../src/passenger.cc into ../build/obj/tests/passenger.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include   -std=c++11  -c -o  ../build/obj/tests/passenger.o ../src/passenger.cc
==== Auto-Generating Dependencies for ../src/passenger_generator.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/tests/passenger_generator.d -MP -MT ../build/obj/tests/passenger_generator.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include   -std=c++11 ../src/passenger_generator.cc
==== Compiling ../src/passenger_generator.cc into ../build/obj/tests/passenger_generator.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include   -std=c++11  -c -o  ../build/obj/tests/passenger_generator.o ../src/passenger_generator.cc
==== Auto-Generating Dependencies for ../src/route.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/tests/route.d -MP -MT ../build/obj/tests/route.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include   -std=c++11 ../src/route.cc
==== Compiling ../src/route.cc into ../build/obj/tests/route.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include   -std=c++11  -c -o  ../build/obj/tests/route.o ../src/route.cc
../src/route.cc: In constructor Route::Route(std::__cxx11::string, Stop**, double*, int, PassengerGenerator*):
../src/route.cc:10:39: warning: unused parameter generator [-Wunused-parameter]
   int num_stops, PassengerGenerator * generator) {
                                       ^~~~~~~~~
==== Auto-Generating Dependencies for ../src/stop.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/tests/stop.d -MP -MT ../build/obj/tests/stop.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include   -std=c++11 ../src/stop.cc
==== Compiling ../src/stop.cc into ../build/obj/tests/stop.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include   -std=c++11  -c -o  ../build/obj/tests/stop.o ../src/stop.cc
==== Auto-Generating Dependencies for ../src/passenger_factory.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/tests/passenger_factory.d -MP -MT ../build/obj/tests/passenger_factory.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include   -std=c++11 ../src/passenger_factory.cc
==== Compiling ../src/passenger_factory.cc into ../build/obj/tests/passenger_factory.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include   -std=c++11  -c -o  ../build/obj/tests/passenger_factory.o ../src/passenger_factory.cc
==== Auto-Generating Dependencies for passengers_UT.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/tests/passengers_UT.d -MP -MT ../build/obj/tests/passengers_UT.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include   -std=c++11 passengers_UT.cc
==== Compiling passengers_UT.cc into ../build/obj/tests/passengers_UT.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include   -std=c++11  -c -o  ../build/obj/tests/passengers_UT.o passengers_UT.cc
==== Auto-Generating Dependencies for passenger_factory_UT.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/tests/passenger_factory_UT.d -MP -MT ../build/obj/tests/passenger_factory_UT.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include   -std=c++11 passenger_factory_UT.cc
==== Compiling passenger_factory_UT.cc into ../build/obj/tests/passenger_factory_UT.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include   -std=c++11  -c -o  ../build/obj/tests/passenger_factory_UT.o passenger_factory_UT.cc
==== Auto-Generating Dependencies for passenger_UT.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/tests/passenger_UT.d -MP -MT ../build/obj/tests/passenger_UT.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include   -std=c++11 passenger_UT.cc
==== Compiling passenger_UT.cc into ../build/obj/tests/passenger_UT.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include   -std=c++11  -c -o  ../build/obj/tests/passenger_UT.o passenger_UT.cc
==== Linking ../build/bin/unittest. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -L/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/lib -pthread -fprofile-arcs -ftest-coverage ../build/obj/tests/local_simulator.o ../build/obj/tests/bus.o ../build/obj/tests/random_passenger_generator.o ../build/obj/tests/passenger.o ../build/obj/tests/passenger_generator.o ../build/obj/tests/route.o ../build/obj/tests/stop.o ../build/obj/tests/passenger_factory.o ../build/obj/tests/passengers_UT.o ../build/obj/tests/passenger_factory_UT.o ../build/obj/tests/passenger_UT.o -o ../build/bin/unittest -lgtest_main -lgtest -lgmock -Wl,-rpath,/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/lib -lGL
/usr/bin/ld: cannot find -lgtest_main
/usr/bin/ld: cannot find -lgtest
/usr/bin/ld: cannot find -lgmock
collect2: error: ld returned 1 exit status
Makefile:197: recipe for target '../build/bin/unittest' failed
make: *** [../build/bin/unittest] Error 1
</pre>



+ Skip: Check that file "../build/bin/unittest" exists.

  This test was not run because of an earlier failing test.

+ Pass: Change into directory "..".


#### Style Tests

+ Pass: Change into directory "src/".

+ Pass: Check that file "mainpage.h" exists.

+ Pass: Ignoring mainpage.h



+ Fail: Grading style compliancy errors (Found: 4 errors, Expected less than 3)

+ Skip: Restoring mainpage.h

  This test was not run because of an earlier failing test.

+ Skip: Change into directory "..".

  This test was not run because of an earlier failing test.


#### Doxygen Tests

+ Fail: Change into directory "docs/".

     Directory "docs/" not found.


##### .gitignore configured properly

+ Pass: Check that file/directory "html" does not exist.

+ Pass: Check that file/directory "latex" does not exist.

+ Fail: Check that file "Doxyfile" exists.

     "Doxyfile" not found.

+ Fail: Generating documentation by running doxygen

+ Fail: Check that directory "html" exists.

     "html" not found.

+ Pass: Removing generated html and/or latex directories...



+ Pass: Change into directory "..".

+ Pass: Change into directory "..".

+ Pass: Resetting repo...




### Basic Tests on Master

+ Pass: Checkout master branch.




#### Necessary Files and Structure

+ Pass: Check that directory "project" exists.

+ Pass: Check that directory "project/src" exists.

+ Pass: Check that directory "project/tests" exists.


#### Compilation Tests

+ Pass: Change into directory "project".

+ Pass: Copy file "Copying official project makefile".



+ Pass: Copy file "Copying official src makefile".



+ Pass: Copy file "Copying official tests makefile".



+ Fail: Check that make compiles.

    Make compile fails with errors:.
<pre>........PROJ MAKEFILE: Making TransitSim.......................................
cd src; make -j
make[1]: Entering directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/src'
==== Auto-Generating Dependencies for ../drivers/transit_sim.cc. ====
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/objdrivers/transit_sim.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/objdrivers/transit_sim.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers ../drivers/transit_sim.cc
==== Auto-Generating Dependencies for local_simulator.cc. ====
==== Auto-Generating Dependencies for bus.cc. ====
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/local_simulator.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/local_simulator.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers local_simulator.cc
==== Auto-Generating Dependencies for passenger.cc. ====
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/bus.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/bus.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers bus.cc
==== Auto-Generating Dependencies for random_passenger_generator.cc. ====
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/random_passenger_generator.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/random_passenger_generator.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers random_passenger_generator.cc
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/passenger.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/passenger.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers passenger.cc
==== Auto-Generating Dependencies for passenger_generator.cc. ====
==== Auto-Generating Dependencies for route.cc. ====
==== Auto-Generating Dependencies for stop.cc. ====
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/passenger_generator.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/passenger_generator.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers passenger_generator.cc
==== Auto-Generating Dependencies for passenger_factory.cc. ====
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/route.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/route.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers route.cc
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/stop.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/stop.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers stop.cc
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/passenger_factory.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/passenger_factory.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers passenger_factory.cc
==== Compiling passenger.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/passenger.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/passenger.o passenger.cc
==== Compiling passenger_factory.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/passenger_factory.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/passenger_factory.o passenger_factory.cc
==== Compiling passenger_generator.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/passenger_generator.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/passenger_generator.o passenger_generator.cc
==== Compiling bus.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/bus.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/bus.o bus.cc
==== Compiling route.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/route.o. ====
==== Compiling stop.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/stop.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/route.o route.cc
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/stop.o stop.cc
==== Compiling local_simulator.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/local_simulator.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/local_simulator.o local_simulator.cc
==== Compiling random_passenger_generator.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/random_passenger_generator.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/random_passenger_generator.o random_passenger_generator.cc
==== Compiling ../drivers/transit_sim.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/objdrivers/transit_sim.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/objdrivers/transit_sim.o ../drivers/transit_sim.cc
bus.cc: In member function bool Bus::LoadPassenger(Passenger*):
bus.cc:20:37: warning: unused parameter new_passenger [-Wunused-parameter]
 bool Bus::LoadPassenger(Passenger * new_passenger) {
                                     ^~~~~~~~~~~~~
In file included from ../src/bus.h:14:0,
                 from ../src/stop.h:13,
                 from ../src/passenger_generator.h:12,
                 from passenger_generator.cc:7:
../src/route.h:21:27: error: Stop has not been declared
   Route(std::string name, Stop ** stops, double * distances, int num_stops,
                           ^~~~
../src/route.h:28:3: error: Stop does not name a type; did you mean atol?
   Stop * GetDestinationStop() const;    // Get pointer to next stop
   ^~~~
   atol
../src/route.h:34:13: error: Stop was not declared in this scope
   std::list<Stop *> stops_;
             ^~~~
../src/route.h:34:13: note: suggested alternative: atol
   std::list<Stop *> stops_;
             ^~~~
             atol
../src/route.h:34:19: error: template argument 1 is invalid
   std::list<Stop *> stops_;
                   ^
../src/route.h:34:19: error: template argument 2 is invalid
../src/route.h:39:3: error: Stop does not name a type; did you mean atol?
   Stop * destination_stop_;
   ^~~~
   atol
route.cc:9:1: error: prototype for Route::Route(std::__cxx11::string, Stop**, double*, int) does not match any in class Route
 Route::Route(std::string name, Stop ** stops, double * distances,
 ^~~~~
In file included from route.cc:7:0:
../src/route.h:19:7: error: candidates are: Route::Route(Route&&)
 class Route {
       ^~~~~
../src/route.h:19:7: error:                 Route::Route(const Route&)
../src/route.h:21:3: error:                 Route::Route(std::__cxx11::string, Stop**, double*, int, PassengerGenerator*)
   Route(std::string name, Stop ** stops, double * distances, int num_stops,
   ^~~~~
makefile:87: recipe for target '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/passenger_generator.o' failed
make[1]: *** [/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/passenger_generator.o] Error 1
make[1]: *** Waiting for unfinished jobs....
makefile:87: recipe for target '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/route.o' failed
make[1]: *** [/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/route.o] Error 1
stop.cc: In member function int Stop::AddPassengers(Passenger*):
stop.cc:18:37: warning: unused parameter pass [-Wunused-parameter]
 int Stop::AddPassengers(Passenger * pass) {
                                     ^~~~
In file included from ../src/bus.h:14:0,
                 from ../src/stop.h:13,
                 from ../src/passenger_generator.h:12,
                 from ../src/random_passenger_generator.h:12,
                 from random_passenger_generator.cc:10:
../src/route.h:21:27: error: Stop has not been declared
   Route(std::string name, Stop ** stops, double * distances, int num_stops,
                           ^~~~
../src/route.h:28:3: error: Stop does not name a type; did you mean atol?
   Stop * GetDestinationStop() const;    // Get pointer to next stop
   ^~~~
   atol
../src/route.h:34:13: error: Stop was not declared in this scope
   std::list<Stop *> stops_;
             ^~~~
../src/route.h:34:13: note: suggested alternative: atol
   std::list<Stop *> stops_;
             ^~~~
             atol
../src/route.h:34:19: error: template argument 1 is invalid
   std::list<Stop *> stops_;
                   ^
../src/route.h:34:19: error: template argument 2 is invalid
../src/route.h:39:3: error: Stop does not name a type; did you mean atol?
   Stop * destination_stop_;
   ^~~~
   atol
makefile:87: recipe for target '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/random_passenger_generator.o' failed
make[1]: *** [/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/obj/transit_sim/random_passenger_generator.o] Error 1
../drivers/transit_sim.cc: In function int main():
../drivers/transit_sim.cc:149:27: error: class Bus has no member named IsTripComplete
     if (campus_connector1.IsTripComplete()) {
                           ^~~~~~~~~~~~~~
../drivers/transit_sim.cc:155:27: error: class Bus has no member named IsTripComplete
     if (campus_connector2.IsTripComplete()) {
                           ^~~~~~~~~~~~~~
makefile:101: recipe for target '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/objdrivers/transit_sim.o' failed
make[1]: *** [/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/build/objdrivers/transit_sim.o] Error 1
make[1]: Leaving directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/project/src'
makefile:11: recipe for target 'TransitSim' failed
make: *** [TransitSim] Error 2
</pre>



+ Skip: Check that file "build/bin/transit_sim" exists.

  This test was not run because of an earlier failing test.

+ Pass: Change into directory "tests".

+ Fail: Check that make compiles.

    Make compile fails with errors:.
<pre>cd /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external; make
make[1]: Entering directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external'
cd gtest; make
make[2]: Entering directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/gtest'
git clone https://github.com/google/googletest.git src
Cloning into 'src'...
mkdir -p build
cd build; CC=/soft/gcc/7.1.0/Linux_x86_64/bin/gcc CXX=/soft/gcc/7.1.0/Linux_x86_64/bin/g++ cmake ../src -DCMAKE_INSTALL_PREFIX=/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install
-- The C compiler identification is GNU 7.1.0
-- The CXX compiler identification is GNU 7.1.0
-- Check for working C compiler: /soft/gcc/7.1.0/Linux_x86_64/bin/gcc
-- Check for working C compiler: /soft/gcc/7.1.0/Linux_x86_64/bin/gcc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /soft/gcc/7.1.0/Linux_x86_64/bin/g++
-- Check for working CXX compiler: /soft/gcc/7.1.0/Linux_x86_64/bin/g++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Found PythonInterp: /usr/bin/python (found version "2.7.15") 
-- Looking for pthread.h
-- Looking for pthread.h - found
-- Looking for pthread_create
-- Looking for pthread_create - not found
-- Looking for pthread_create in pthreads
-- Looking for pthread_create in pthreads - not found
-- Looking for pthread_create in pthread
-- Looking for pthread_create in pthread - found
-- Found Threads: TRUE  
-- Configuring done
-- Generating done
-- Build files have been written to: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/gtest/build
cd build; cmake --build . --target install
make[3]: Entering directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/gtest/build'
make[4]: Entering directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/gtest/build'
make[5]: Entering directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/gtest/build'
Scanning dependencies of target gtest
make[5]: Leaving directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/gtest/build'
make[5]: Entering directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/gtest/build'
[ 12%] Building CXX object googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o
[ 25%] Linking CXX static library ../lib/libgtest.a
make[5]: Leaving directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/gtest/build'
[ 25%] Built target gtest
make[5]: Entering directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/gtest/build'
Scanning dependencies of target gmock
make[5]: Leaving directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/gtest/build'
make[5]: Entering directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/gtest/build'
[ 37%] Building CXX object googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o
[ 50%] Linking CXX static library ../lib/libgmock.a
make[5]: Leaving directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/gtest/build'
[ 50%] Built target gmock
make[5]: Entering directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/gtest/build'
Scanning dependencies of target gmock_main
make[5]: Leaving directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/gtest/build'
make[5]: Entering directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/gtest/build'
[ 62%] Building CXX object googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o
[ 75%] Linking CXX static library ../lib/libgmock_main.a
make[5]: Leaving directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/gtest/build'
[ 75%] Built target gmock_main
make[5]: Entering directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/gtest/build'
Scanning dependencies of target gtest_main
make[5]: Leaving directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/gtest/build'
make[5]: Entering directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/gtest/build'
[ 87%] Building CXX object googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o
[100%] Linking CXX static library ../lib/libgtest_main.a
make[5]: Leaving directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/gtest/build'
[100%] Built target gtest_main
make[4]: Leaving directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/gtest/build'
Install the project...
-- Install configuration: ""
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gmock
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gmock/gmock.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gmock/gmock-spec-builders.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gmock/internal
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gmock/internal/gmock-internal-utils.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gmock/internal/gmock-pp.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gmock/internal/custom
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gmock/internal/custom/gmock-matchers.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gmock/internal/custom/README.md
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gmock/internal/custom/gmock-port.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gmock/internal/custom/gmock-generated-actions.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gmock/internal/custom/gmock-generated-actions.h.pump
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gmock/internal/gmock-port.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gmock/gmock-actions.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gmock/gmock-generated-actions.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gmock/gmock-generated-matchers.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gmock/gmock-matchers.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gmock/gmock-more-matchers.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gmock/gmock-nice-strict.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gmock/gmock-cardinalities.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gmock/gmock-function-mocker.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gmock/gmock-generated-matchers.h.pump
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gmock/gmock-generated-function-mockers.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gmock/gmock-generated-actions.h.pump
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gmock/gmock-generated-function-mockers.h.pump
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gmock/gmock-more-actions.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/lib/libgmock.a
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/lib/libgmock_main.a
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/lib/pkgconfig/gmock.pc
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/lib/pkgconfig/gmock_main.pc
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/lib/cmake/GTest/GTestTargets.cmake
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/lib/cmake/GTest/GTestTargets-noconfig.cmake
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/lib/cmake/GTest/GTestConfigVersion.cmake
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/lib/cmake/GTest/GTestConfig.cmake
-- Up-to-date: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gtest
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gtest/gtest-typed-test.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gtest/gtest-printers.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gtest/gtest_prod.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gtest/gtest_pred_impl.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gtest/internal
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gtest/internal/gtest-param-util.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gtest/internal/gtest-string.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gtest/internal/gtest-filepath.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gtest/internal/gtest-port.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gtest/internal/gtest-type-util.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gtest/internal/gtest-internal.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gtest/internal/gtest-death-test-internal.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gtest/internal/custom
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gtest/internal/custom/README.md
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gtest/internal/custom/gtest-port.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gtest/internal/custom/gtest.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gtest/internal/custom/gtest-printers.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gtest/internal/gtest-port-arch.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gtest/gtest-param-test.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gtest/gtest-message.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gtest/gtest-death-test.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gtest/gtest-matchers.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gtest/gtest-test-part.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gtest/gtest-spi.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include/gtest/gtest.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/lib/libgtest.a
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/lib/libgtest_main.a
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/lib/pkgconfig/gtest.pc
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/lib/pkgconfig/gtest_main.pc
make[3]: Leaving directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/gtest/build'
make[2]: Leaving directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/gtest'
make[1]: Leaving directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external'
==== Auto-Generating Dependencies for ../src/local_simulator.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/tests/local_simulator.d -MP -MT ../build/obj/tests/local_simulator.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include   -std=c++11 ../src/local_simulator.cc
==== Compiling ../src/local_simulator.cc into ../build/obj/tests/local_simulator.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include   -std=c++11  -c -o  ../build/obj/tests/local_simulator.o ../src/local_simulator.cc
==== Auto-Generating Dependencies for ../src/bus.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/tests/bus.d -MP -MT ../build/obj/tests/bus.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include   -std=c++11 ../src/bus.cc
==== Compiling ../src/bus.cc into ../build/obj/tests/bus.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include   -std=c++11  -c -o  ../build/obj/tests/bus.o ../src/bus.cc
../src/bus.cc: In member function bool Bus::LoadPassenger(Passenger*):
../src/bus.cc:20:37: warning: unused parameter new_passenger [-Wunused-parameter]
 bool Bus::LoadPassenger(Passenger * new_passenger) {
                                     ^~~~~~~~~~~~~
==== Auto-Generating Dependencies for ../src/random_passenger_generator.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/tests/random_passenger_generator.d -MP -MT ../build/obj/tests/random_passenger_generator.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include   -std=c++11 ../src/random_passenger_generator.cc
==== Compiling ../src/random_passenger_generator.cc into ../build/obj/tests/random_passenger_generator.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include   -std=c++11  -c -o  ../build/obj/tests/random_passenger_generator.o ../src/random_passenger_generator.cc
In file included from ../src/bus.h:14:0,
                 from ../src/stop.h:13,
                 from ../src/passenger_generator.h:12,
                 from ../src/random_passenger_generator.h:12,
                 from ../src/random_passenger_generator.cc:10:
../src/route.h:21:27: error: Stop has not been declared
   Route(std::string name, Stop ** stops, double * distances, int num_stops,
                           ^~~~
../src/route.h:28:3: error: Stop does not name a type; did you mean atol?
   Stop * GetDestinationStop() const;    // Get pointer to next stop
   ^~~~
   atol
../src/route.h:34:13: error: Stop was not declared in this scope
   std::list<Stop *> stops_;
             ^~~~
../src/route.h:34:13: note: suggested alternative: atol
   std::list<Stop *> stops_;
             ^~~~
             atol
../src/route.h:34:19: error: template argument 1 is invalid
   std::list<Stop *> stops_;
                   ^
../src/route.h:34:19: error: template argument 2 is invalid
../src/route.h:39:3: error: Stop does not name a type; did you mean atol?
   Stop * destination_stop_;
   ^~~~
   atol
Makefile:140: recipe for target '../build/obj/tests/random_passenger_generator.o' failed
make: *** [../build/obj/tests/random_passenger_generator.o] Error 1
</pre>



+ Skip: Check that file "../build/bin/unittest" exists.

  This test was not run because of an earlier failing test.

+ Pass: Change into directory "..".


#### Style Tests

+ Pass: Change into directory "src/".

+ Pass: Check that file "mainpage.h" exists.

+ Pass: Ignoring mainpage.h



+ Pass: Grading style compliancy errors (Found: 0 errors)

+ Pass: Restoring mainpage.h



+ Pass: Change into directory "..".


#### Doxygen Tests

+ Pass: Change into directory "docs/".


##### .gitignore configured properly

+ Pass: Check that file/directory "html" does not exist.

+ Pass: Check that file/directory "latex" does not exist.

+ Pass: Check that file "Doxyfile" exists.

+ Pass: Generating documentation by running doxygen

+ Pass: Check that directory "html" exists.

+ Pass: Removing generated html and/or latex directories...



+ Pass: Change into directory "..".

+ Pass: Change into directory "..".

+ Pass: Resetting repo...




### Git Usage

+ Pass: Run git ls-remote gather all branches in repo

		222d618f025906a8fb86b0b29b0b28ae89a17106	refs/heads/devel

		75c8c52e8840f9a0197c448f50d451fe9e0c3097	refs/heads/enhance/02-enhance_passengers_class

		dc2615074ce7775de20ff76310d5c58e5604c4a0	refs/heads/fix/01-compilation-errors

		39df1fa9d07b1cc51acbef3304a0822764ca1760	refs/heads/iteration_priority_2

		4ad6116b275dad508464faacad6dfb0ddfeeb47a	refs/heads/master

		53abec124c2c63fbf091b457d0fcf60469f3b012	refs/heads/preliminary_testing_submission



