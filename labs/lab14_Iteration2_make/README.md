The purpose of this lab is to lead you through the process of altering the makefile in the project/src diretory, 
which was made available to you via an update to shared-upstream repository on github.umn.edu for Iteration 2 Preliminary Deliverable 2,
so you can use it to successfully create an executable that runs your visual simulation

Recall, in iteration 2, you will deliver 2 working simulations, the visual simulation and the configuration simulation. The objective of
this lab is to get the visual simulation working. 

Once you have completed this task, you should be able to add the proper directives to your makefile 
in the project/src directory so it can successfully create an executable that runs the configuration simulation. 
(Note, before the configuration simulation executable can be created successfully, you will have 
to finish implementing it by completing the activities specified in the roadmap of comments embedded in the files that were released 
yesterday (Thursday, 11/14)). 


First, incorporate the newest and latest versions of the project files by pulling from the class
shared-upstream repository and merging your changes into your 'devel' branch.
Then, navigate to the **project/src directory**.  

Before beginning the lab, save a backup copy of your current src makefile (for example, copy the makefile into a file named makefile.bak).
Replace your old src makefile with the makefile provided in this lab. The lab will guide you on
what changes need to be made regarding the visual simulation. In addition to the changes made during
this lab, you should take any existing modifications to the makefile you made for Preliminary 1 (or otherwise)
and incorporate them back into this new makefile.

The visualization simulation relies on files in another directory that consist of C++ header and source code files that handle the web communication for the visualization. The configuration simulation will only require the files that can be found in the shared_upstream branch.

The path to the directory containing the C++ source files implementing the visualization functionality
is specified in a variable assigned in the makefile in the project/src directory. 

Open the makefile and locate the comment that says: **Path to web and library code**.  The value assigned to the 
variable named CS3081DIR contains the code necessary to build the visualizer. Have a look!

Next read through the makefile provided with the lab, _starting at the top and proceeding sequentially down to the bottom
one line at a time_, and follow the instructions in the EACH of the comments that specify the need to  
create a variable or variables OR add/modify a directive already present in the makefile. 

When you reach the comment mentioning the need for include directives which are necessary to create the executable for the visual simulation, cut and paste the following include directives:

```
-I$(CS3081DIR)/web  
-isystem$(CS3081DIR)/external/include  
-isystem$(CS3081DIR)/external/include/cppwebserver  
-isystem$(CS3081DIR)/external/include/gtest  
-isystem$(CS3081DIR)/external/include/websockets  
```

onto the end of the line (preferably, all on the same line)

**don't stop at that point however**, keep going and making changes specfied in the comments until you hit the end of the file. 

One note: Once you have the makefile working (it successfully attempts to compile your visual sim - and will succeed 
if you have added your structures correctly as specified by lab 13 (note, a new version of the data_structures.h
file in the structures was made available in shared-upstream AFTER the lab, so you may have to update your code), your
version of the visual simulation will compile.

While compiling the configuration simulation that you need to write for Prelim 2 has not been set up in this lab, your work on compiling the visualization simulation and changing the makefile in prelim 1 should be enough for you to understand how to get that compiling on your own. It will be limited to code in shared_upstream and will not require any code in the web/ directory.

You should then run it - the instructions for doing so are  in the project/README.md file! 

Final, once you have your makefile working,
If you would like to cut down on the amount of output the makefile produces when it runs, 
you can add an '@' in front of each line similar to the lines below in the makefile:  

```
@echo "=======...  
@$(call make...)  
@(echo "======...  
@$(CXX)$(OMP)...  
```

Happy Programming!!!




