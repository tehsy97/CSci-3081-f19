### Fuller Feedback for Lab 06

Run on September 30, 08:30:02 AM.


#### System Files and Lab Directory Structure

+ Pass: Check that directory "googletest" exists.

+ Pass: Check that directory "labs" exists.

+ Pass: Check that directory "labs/lab06_google_tests" exists.

+ Pass: Make directory "Lab06_Testing".

+ Pass: Change into directory "Lab06_Testing".


#### Essential Files Exist

+ Pass: Check that file "../labs/lab06_google_tests/date_unittest.cc" exists.


### Testing correct implementation

+ Pass: Copy directory "Lab06 files.".



+ Pass: Copy directory "Files for correct version".



+ Pass: Change into directory "correct".

+ Pass: Check that make compiles.



+ Pass: Check that file "date_unittest" exists.

+ Pass: Get all google tests.
    12 tests found.




#### Results

+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.PrintDateTests.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.PrintDateTestsWithoutNewline.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.DaysBetweenTests.



+ Fail: Check that a GoogleTest test passes.
    fails the test: DateTest.GetDateTests.
<pre>
[ RUN      ] DateTest.GetDateTests
./date_unittest.cc:146: Failure
      Expected: output6
      Which is: "2019-10-01"
To be equal to: std::string(s)
      Which is: "2019-09-31"</pre>



+ Fail: Check that a GoogleTest test passes.
    fails the test: DateTest.LeadingZeroTests.
<pre>
[ RUN      ] DateTest.LeadingZeroTests
./date_unittest.cc:205: Failure
      Expected: output8
      Which is: "10-01-2019\n"
To be equal to: std::string(s)
      Which is: "09-31-2019\n"</pre>



+ Fail: Check that a GoogleTest test passes.
    fails the test: DateTest.PrintUsDateWithoutNewLineTestsfalse.
<pre>
[ RUN      ] DateTest.PrintUsDateWithoutNewLineTestsfalse
./date_unittest.cc:263: Failure
      Expected: output8
      Which is: "10-01-2019"
To be equal to: std::string(s)
      Which is: "09-31-2019"</pre>



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.TodayDateTests.



+ Fail: Check that a GoogleTest test passes.
    fails the test: DateTest.GetUsDateTests.
<pre>
[ RUN      ] DateTest.GetUsDateTests
./date_unittest.cc:333: Failure
      Expected: output8
      Which is: "10-01-2019"
To be equal to: std::string(s)
      Which is: "09-31-2019"</pre>



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.SomeOperationTests.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.ConstructorTest.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.operatorMinusTests.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.operatorPlusTests.



+ Fail: 66.67% of the tests passed, but the target is 100%.


### Testing Mutants


#### Testing Mutant 1 for failure

+ Fail: There is no test case for this mutant (since all tests pass).
   - Reason - Dates constructed with epoch are about 70 years in the future


#### Testing Mutant 2 for failure

+ Pass: At least one test failed for Mutant 2


#### Testing Mutant 3 for failure

+ Pass: At least one test failed for Mutant 3


#### Testing Mutant 4 for failure

+ Pass: At least one test failed for Mutant 4


#### Testing Mutant 5 for failure

+ Pass: At least one test failed for Mutant 5


#### Testing Mutant 6 for failure

+ Pass: At least one test failed for Mutant 6


#### Testing Mutant 7 for failure

+ Pass: At least one test failed for Mutant 7


#### Testing Mutant 8 for failure

+ Pass: At least one test failed for Mutant 8


#### Testing Mutant 9 for failure

+ Pass: At least one test failed for Mutant 9

