### Feedback for Lab 10

Run on October 17, 20:23:17 PM.


### Necessary Files and Structure

+ Pass: Check that directory "labs" exists.

+ Pass: Check that directory "labs/lab10_advanced_git" exists.

+ Pass: Check that directory "project" exists.


### Git Usage

+ Pass: Run git ls-remote to check for existence of specific branch- Branch devel found

+ Pass: Checkout devel branch.



+ Pass: Run git ls-remote gather all branches in repo

299632e3ffaef512bf0422e63bad64ffd9e51a08	refs/heads/devel

dc2615074ce7775de20ff76310d5c58e5604c4a0	refs/heads/fix/01-compilation-errors

75c8c52e8840f9a0197c448f50d451fe9e0c3097	refs/heads/master



+ Pass: Checking for the correct number of branches

Insufficient branches found (found=1, required=2):

fix/01-compilation-errors


#### Counting commits on devel

+ Pass: Checkout devel branch.



+ Pass: Gather commit history

[Shin Yin Teh] 2019-10-16 (HEAD -> devel, origin/devel) fix 1 compilation error Merge branch 'fix/01-compilation-errors' into devel 

[Shin Yin Teh] 2019-10-16 (origin/fix/01-compilation-errors, fix/01-compilation-errors) fix(local_simulator.cc): fix #1 compilation error - use correct operator for pointers to call method.


[Shin Yin Teh] 2019-10-15 Merge branch 'master' of https://github.umn.edu/umn-csci-3081-f19/repo-teh00001 

[Shin Yin Teh] 2019-10-15 Merge branch 'support-code' 

[Shin Yin Teh] 2019-10-15 pull codes Merge branch 'support-code' of github.umn.edu:umn-csci-3081-F19/csci3081-shared-upstream into support-code 


[Shin Yin Teh] 2019-10-15 fix style Merge branch 'master' of https://github.umn.edu/umn-csci-3081-f19/repo-teh00001 

[Shin Yin Teh] 2019-10-15 fix style 




[Shin Yin Teh] 2019-10-14 add lab 9 and lab 10 






[Shin Yin Teh] 2019-10-11 merge support-code Merge branch 'support-code' 

[Shin Yin Teh] 2019-10-11 pull lab10 Merge branch 'support-code' of github.umn.edu:umn-csci-3081-F19/csci3081-shared-upstream into support-code 







[Shin Yin Teh] 2019-10-11 add lab09 Merge branch 'support-code' 

[Shin Yin Teh] 2019-10-11 pull lab 9Merge branch 'support-code' of github.umn.edu:umn-csci-3081-F19/csci3081-shared-upstream into support-code 










+ Pass: Check git commit history
Sufficient commits (found=13,required=4)


### Git Issue Usage

+ Pass: Configuring GHI

+ Pass: Run ghi for total number of open issues in Github repo (Found: 2)

[OPEN issue #2] :  Passenger class [enhancement]

[OPEN issue #1] :  compilation-errors [bug]





+ Pass: Run ghi for total number of closed issues in Github repo (Found: 0)

+ Pass: Run ghi for total number of issues in Github repo (Found: 2, Expected: 2) 

 [OPEN issue #2] :  Passenger class [enhancement]

[OPEN issue #1] :  compilation-errors [bug]

[CLOSED issue #] : 

 




### Test that code on  devel compiles

+ Pass: Checkout devel branch.



+ Pass: Change into directory "project".

+ Pass: Check that file "makefile" exists.

+ Fail: Check that make compiles.

    Make compile fails with errors:.
<pre>cd src; make -j
make[1]: Entering directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-teh00001/project/src'
==== Auto-Generating Dependencies for ../drivers/transit_sim.cc. ====
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-teh00001/project/build/objdrivers/transit_sim.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-teh00001/project/build/objdrivers/transit_sim.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers ../drivers/transit_sim.cc
g++: error: unrecognized command line option -Wsuggest-override
makefile:100: recipe for target '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-teh00001/project/build/objdrivers/transit_sim.o' failed
make[1]: *** [/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-teh00001/project/build/objdrivers/transit_sim.o] Error 1
make[1]: Leaving directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-teh00001/project/src'
makefile:10: recipe for target 'TransitSim' failed
make: *** [TransitSim] Error 2
</pre>



