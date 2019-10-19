### Assessment for Lab 10

#### Total score: _100.0_ / _100_

Run on October 19, 09:20:05 AM.


### Necessary Files and Structure

+  _10_ / _10_ : Pass: Check that directory "labs" exists.

+  _10_ / _10_ : Pass: Check that directory "labs/lab10_advanced_git" exists.


### Git Usage

+  _10_ / _10_ : Pass: Run git ls-remote to check for existence of specific branch- Branch devel found

+ Pass: Checkout devel branch.



+ Pass: Run git ls-remote gather all branches in repo

		0983a8ea8a313705fcfbd216b6e49e3f5b86194d	refs/heads/devel

		75c8c52e8840f9a0197c448f50d451fe9e0c3097	refs/heads/enhance/02-enhance_passengers_class

		dc2615074ce7775de20ff76310d5c58e5604c4a0	refs/heads/fix/01-compilation-errors

		5337cfc32dd961390590c772665ae10e894fba2b	refs/heads/master



+  _10_ / _10_ : Pass: Checking for the correct number of branches

Sufficient branches found (found=2, required=2):

enhance/02-enhance_passengers_class

fix/01-compilation-errors


#### Counting commits on devel

+ Pass: Checkout devel branch.



+ Pass: Gather commit history

		[Shin Yin Teh] 2019-10-18 (HEAD -> devel, origin/devel) merge to devel Merge branch 'enhance/02-enhance_passengers_class' into devel 

		[Shin Yin Teh] 2019-10-18 enhance(files): enhance #2 <enhance passengers class> - Multiple lines of description
- Lists all the important elements that have been changed
- etc.



		[Shin Yin Teh] 2019-10-17 update lab09 


		[Shin Yin Teh] 2019-10-16 fix 1 compilation error Merge branch 'fix/01-compilation-errors' into devel 

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










+  _5_ / _5_ : Pass: Check git commit history
Sufficient commits (found=19,required=4)


### Git Issue Usage

+ Pass: Configuring GHI

+ Pass: Run ghi for total number of open issues in Github repo (Found: 0)

+ Pass: Run ghi for total number of closed issues in Github repo (Found: 2)

[CLOSED issue #2] :  Passenger class [enhancement]

[CLOSED issue #1] :  compilation-errors [bug]





+  _10.0_ / _10_ : Pass: Run ghi for total number of issues in Github repo (Found: 2, Expected: 2) 

 [OPEN issue #] : 

[CLOSED issue #2] :  Passenger class [enhancement]

[CLOSED issue #1] :  compilation-errors [bug]

 




### Test that code on  devel compiles

+ Pass: Checkout devel branch.



+  _10_ / _10_ : Pass: Check that directory "project" exists.

+ Pass: Change into directory "project".

+  _5_ / _5_ : Pass: Check that file "makefile" exists.

+  _30_ / _30_ : Pass: Check that make compiles.



#### Total score: _100.0_ / _100_

