Getting Started with Transit Simulator {#releasenotes}
===========
# Branches and Fixes
* release_notes
    * add release_notes.md in project/src
    * generate passenger at route update()
    * add comment for Update() in route.cc
    * fix style

* refactor/comment
    * added description for Update() in bus.cc
    * added description for AddPassenger() and LoadPassenger() in stop.cc
    
* develop_guide
    * created markdown files as a guide for developers
    * updated users guide markdown file

* fix/UT-unable-open-correct-file 
    * update passenger, stop, and bus unittest
        * not opening corerct output file which lead to errors

* regression_test
    * created regression test for the project 
    * tested the program (completed regression testing)
    * make changes to makefile

* refac/mainpage
    * created mainpage markdown and deleted markdown.h
    * creased a markdown files as a guide for users

* refactor/iter3
    * completed refactoring 1 requirement - change the probability of the final stop on a route to 0
    * created refactor.txt to record the changes made in code
    * refactored code - extract method (completed refactoring 2)
    * fix iteration 1 bugs (bus skip stop) in branch iteration 2  