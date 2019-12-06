### Iteration 2 - Functionality Partial Assessment (Graded By: Shrivardhan Bharadwaj)

Run on December 06, 08:39:02 AM.

<hr>

This Partial Assessment indicates a TA has begun grading your Iteration 2 Program Functionality. However, functionality will be graded using a Canvas rubric and grades will only be posted on Canvas once every student's program functionality has been graded. We ask for your patience at this time.

<hr>

+ Pass: Checkout iteration 2 final submission.




#### Necessary Files and Structure

+ Pass: Check that directory "project" exists.

+ Pass: Check that directory "project/src" exists.

+ Pass: Check that directory "project/tests" exists.

+ Pass: Check that directory "project/docs" exists.


#### Compilation Tests

+ Pass: Change into directory "project/src".

+ Pass: Opening project/docs/Iteration2Checklist.md using firefox

+ Pass: Check that make compiles.




#### Visual Simulation Items

+ Pass: Change into directory "..".

+ Pass: Check that file "./build/bin/vis_sim" exists.

+ Pass: Running vis_sim on port 8081


#### Configuration Simulation Items

+ Fail: Check that file "./build/bin/config_sim" exists.

     "./build/bin/config_sim" not found.

+ Skip: Check that file "config/config.txt" exists.

  This test was not run because of an earlier failing test.

+ Skip: Outputting config sim with no arguments to file for inspection...

  This test was not run because of an earlier failing test.

+ Skip: Outputting config sim with default config file to file for inspection...

  This test was not run because of an earlier failing test.

+ Skip: Outputting config sim with garbage config file for inspection...

  This test was not run because of an earlier failing test.

+ Skip: Manually reviewing output...

  This test was not run because of an earlier failing test.

+ Skip: Manually reviewing default config file output...

  This test was not run because of an earlier failing test.

+ Skip: Manually reviewing configuration_sim.cc...

  This test was not run because of an earlier failing test.


#### Testing Items

+ Pass: Change into directory "tests".

+ Fail: Check that make compiles.

    Make compile fails with errors:.
<pre>==== Auto-Generating Dependencies for ../src/override_passenger_generator.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/tests/override_passenger_generator.d -MP -MT ../build/obj/tests/override_passenger_generator.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include   -std=c++11 ../src/override_passenger_generator.cc
==== Compiling ../src/override_passenger_generator.cc into ../build/obj/tests/override_passenger_generator.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include   -std=c++11  -c -o  ../build/obj/tests/override_passenger_generator.o ../src/override_passenger_generator.cc
==== Auto-Generating Dependencies for ../src/local_simulator.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/tests/local_simulator.d -MP -MT ../build/obj/tests/local_simulator.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include   -std=c++11 ../src/local_simulator.cc
==== Compiling ../src/local_simulator.cc into ../build/obj/tests/local_simulator.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include   -std=c++11  -c -o  ../build/obj/tests/local_simulator.o ../src/local_simulator.cc
==== Auto-Generating Dependencies for ../src/bus.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/tests/bus.d -MP -MT ../build/obj/tests/bus.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include   -std=c++11 ../src/bus.cc
==== Compiling ../src/bus.cc into ../build/obj/tests/bus.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include   -std=c++11  -c -o  ../build/obj/tests/bus.o ../src/bus.cc
==== Auto-Generating Dependencies for ../src/configuration_simulator.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/tests/configuration_simulator.d -MP -MT ../build/obj/tests/configuration_simulator.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include   -std=c++11 ../src/configuration_simulator.cc
==== Compiling ../src/configuration_simulator.cc into ../build/obj/tests/configuration_simulator.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include   -std=c++11  -c -o  ../build/obj/tests/configuration_simulator.o ../src/configuration_simulator.cc
==== Auto-Generating Dependencies for ../src/random_passenger_generator.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/tests/random_passenger_generator.d -MP -MT ../build/obj/tests/random_passenger_generator.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include   -std=c++11 ../src/random_passenger_generator.cc
==== Compiling ../src/random_passenger_generator.cc into ../build/obj/tests/random_passenger_generator.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include   -std=c++11  -c -o  ../build/obj/tests/random_passenger_generator.o ../src/random_passenger_generator.cc
==== Auto-Generating Dependencies for ../src/passenger_factory.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/tests/passenger_factory.d -MP -MT ../build/obj/tests/passenger_factory.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include   -std=c++11 ../src/passenger_factory.cc
==== Compiling ../src/passenger_factory.cc into ../build/obj/tests/passenger_factory.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include   -std=c++11  -c -o  ../build/obj/tests/passenger_factory.o ../src/passenger_factory.cc
==== Auto-Generating Dependencies for ../src/passenger.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/tests/passenger.d -MP -MT ../build/obj/tests/passenger.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include   -std=c++11 ../src/passenger.cc
==== Compiling ../src/passenger.cc into ../build/obj/tests/passenger.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include   -std=c++11  -c -o  ../build/obj/tests/passenger.o ../src/passenger.cc
==== Auto-Generating Dependencies for ../src/passenger_generator.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/tests/passenger_generator.d -MP -MT ../build/obj/tests/passenger_generator.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include   -std=c++11 ../src/passenger_generator.cc
==== Compiling ../src/passenger_generator.cc into ../build/obj/tests/passenger_generator.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include   -std=c++11  -c -o  ../build/obj/tests/passenger_generator.o ../src/passenger_generator.cc
==== Auto-Generating Dependencies for ../src/route.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/tests/route.d -MP -MT ../build/obj/tests/route.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include   -std=c++11 ../src/route.cc
==== Compiling ../src/route.cc into ../build/obj/tests/route.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include   -std=c++11  -c -o  ../build/obj/tests/route.o ../src/route.cc
==== Auto-Generating Dependencies for ../src/config_manager.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/tests/config_manager.d -MP -MT ../build/obj/tests/config_manager.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include   -std=c++11 ../src/config_manager.cc
==== Compiling ../src/config_manager.cc into ../build/obj/tests/config_manager.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include   -std=c++11  -c -o  ../build/obj/tests/config_manager.o ../src/config_manager.cc
==== Auto-Generating Dependencies for ../src/stop.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/tests/stop.d -MP -MT ../build/obj/tests/stop.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include   -std=c++11 ../src/stop.cc
==== Compiling ../src/stop.cc into ../build/obj/tests/stop.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include   -std=c++11  -c -o  ../build/obj/tests/stop.o ../src/stop.cc
==== Auto-Generating Dependencies for passenger_UT.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/tests/passenger_UT.d -MP -MT ../build/obj/tests/passenger_UT.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include   -std=c++11 passenger_UT.cc
==== Compiling passenger_UT.cc into ../build/obj/tests/passenger_UT.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include   -std=c++11  -c -o  ../build/obj/tests/passenger_UT.o passenger_UT.cc
==== Auto-Generating Dependencies for route_UT.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/tests/route_UT.d -MP -MT ../build/obj/tests/route_UT.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include   -std=c++11 route_UT.cc
==== Compiling route_UT.cc into ../build/obj/tests/route_UT.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include   -std=c++11  -c -o  ../build/obj/tests/route_UT.o route_UT.cc
==== Auto-Generating Dependencies for stop_UT.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/tests/stop_UT.d -MP -MT ../build/obj/tests/stop_UT.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include   -std=c++11 stop_UT.cc
==== Compiling stop_UT.cc into ../build/obj/tests/stop_UT.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include   -std=c++11  -c -o  ../build/obj/tests/stop_UT.o stop_UT.cc
==== Auto-Generating Dependencies for command_line_UT.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/tests/command_line_UT.d -MP -MT ../build/obj/tests/command_line_UT.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include   -std=c++11 command_line_UT.cc
==== Compiling command_line_UT.cc into ../build/obj/tests/command_line_UT.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include   -std=c++11  -c -o  ../build/obj/tests/command_line_UT.o command_line_UT.cc
==== Auto-Generating Dependencies for bus_UT.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/tests/bus_UT.d -MP -MT ../build/obj/tests/bus_UT.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include   -std=c++11 bus_UT.cc
==== Compiling bus_UT.cc into ../build/obj/tests/bus_UT.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/include   -std=c++11  -c -o  ../build/obj/tests/bus_UT.o bus_UT.cc
==== Linking ../build/bin/unittest. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -L/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/lib -pthread -fprofile-arcs -ftest-coverage ../build/obj/tests/override_passenger_generator.o ../build/obj/tests/local_simulator.o ../build/obj/tests/bus.o ../build/obj/tests/configuration_simulator.o ../build/obj/tests/random_passenger_generator.o ../build/obj/tests/passenger_factory.o ../build/obj/tests/passenger.o ../build/obj/tests/passenger_generator.o ../build/obj/tests/route.o ../build/obj/tests/config_manager.o ../build/obj/tests/stop.o ../build/obj/tests/passenger_UT.o ../build/obj/tests/route_UT.o ../build/obj/tests/stop_UT.o ../build/obj/tests/command_line_UT.o ../build/obj/tests/bus_UT.o -o ../build/bin/unittest -lgtest_main -lgtest -lgmock -Wl,-rpath,/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_02_Functionality_Assessment/repo-teh00001/external/install/lib -lGL
/usr/bin/ld: cannot find -lgtest_main
/usr/bin/ld: cannot find -lgtest
/usr/bin/ld: cannot find -lgmock
collect2: error: ld returned 1 exit status
Makefile:196: recipe for target '../build/bin/unittest' failed
make: *** [../build/bin/unittest] Error 1
</pre>



+ Fail: Check that file "../build/bin/unittest" exists.

     "../build/bin/unittest" not found.

+ Pass: Manually reviewing unit tests...

    

+ Pass: Opening Iter_02_Functionality_Assessment.md using firefox

