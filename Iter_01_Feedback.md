### Feedback for Iteration 1

Run on November 07, 23:30:33 PM.

<hr>

This feedback is being batched and will run every few hours. Note that these feedback tests are a *work in progress* and will likely be updated to contain more tests as they are developed. Check back periodically for more feedback. Take note that these tests are _incredibly slow_ because of the time it takes to compile 4 executables.

<hr>


### Basic Tests on Devel

+ Pass: Checkout devel branch.




#### Necessary Files and Structure

+ Pass: Check that directory "project" exists.

+ Pass: Check that directory "project/src" exists.

+ Pass: Check that directory "project/tests" exists.

+ Pass: Check that directory "project/docs" exists.


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
==== Auto-Generating Dependencies for passenger_UT.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/tests/passenger_UT.d -MP -MT ../build/obj/tests/passenger_UT.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include   -std=c++11 passenger_UT.cc
==== Compiling passenger_UT.cc into ../build/obj/tests/passenger_UT.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/include   -std=c++11  -c -o  ../build/obj/tests/passenger_UT.o passenger_UT.cc
==== Linking ../build/bin/unittest. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -L/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/lib -pthread -fprofile-arcs -ftest-coverage ../build/obj/tests/local_simulator.o ../build/obj/tests/bus.o ../build/obj/tests/random_passenger_generator.o ../build/obj/tests/passenger.o ../build/obj/tests/passenger_generator.o ../build/obj/tests/route.o ../build/obj/tests/stop.o ../build/obj/tests/passenger_factory.o ../build/obj/tests/passengers_UT.o ../build/obj/tests/passenger_UT.o -o ../build/bin/unittest -lgtest_main -lgtest -lgmock -Wl,-rpath,/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/lib -lGL
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



+ Fail: Grading style compliancy errors

    Could not run make check-style-cse.
==== Checking style is correct ====
/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/cpplint/cpplint-cse.sh --root=.. *.cc *.h
/bin/sh: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/cpplint/cpplint-cse.sh: /bin/bash^M: bad interpreter: No such file or directory
makefile:157: recipe for target 'check-style-cse' failed
make: *** [check-style-cse] Error 126




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

+ Fail: Check that file "html/classPassenger.html" exists.

     "html/classPassenger.html" not found.

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

+ Pass: Check that directory "project/docs" exists.


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
<pre>==== Linking ../build/bin/unittest. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -L/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/lib -pthread -fprofile-arcs -ftest-coverage ../build/obj/tests/local_simulator.o ../build/obj/tests/bus.o ../build/obj/tests/random_passenger_generator.o ../build/obj/tests/passenger.o ../build/obj/tests/passenger_generator.o ../build/obj/tests/route.o ../build/obj/tests/stop.o ../build/obj/tests/passenger_factory.o ../build/obj/tests/passengers_UT.o ../build/obj/tests/passenger_UT.o -o ../build/bin/unittest -lgtest_main -lgtest -lgmock -Wl,-rpath,/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/external/install/lib -lGL
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



+ Fail: Grading style compliancy errors

    Could not run make check-style-cse.
==== Checking style is correct ====
/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/cpplint/cpplint-cse.sh --root=.. *.cc *.h
/bin/sh: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-teh00001/cpplint/cpplint-cse.sh: /bin/bash^M: bad interpreter: No such file or directory
makefile:157: recipe for target 'check-style-cse' failed
make: *** [check-style-cse] Error 126




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

+ Fail: Check that file "html/classPassenger.html" exists.

     "html/classPassenger.html" not found.

+ Pass: Removing generated html and/or latex directories...



+ Pass: Change into directory "..".

+ Pass: Change into directory "..".

+ Pass: Resetting repo...




### Git Usage

+ Pass: Run git ls-remote gather all branches in repo

		2b19daa5483c23aeea663bb3bfdba59932551822	refs/heads/devel

		75c8c52e8840f9a0197c448f50d451fe9e0c3097	refs/heads/enhance/02-enhance_passengers_class

		dc2615074ce7775de20ff76310d5c58e5604c4a0	refs/heads/fix/01-compilation-errors

		493913d4284d8228a12e4755feb05d98f2821d9a	refs/heads/iteration_priority_2

		adb0d18ddc8f5d2b055fb6fc0c608dcdf5c3e9b8	refs/heads/master

		53abec124c2c63fbf091b457d0fcf60469f3b012	refs/heads/preliminary_testing_submission



