# minunit
### Minimal C unit testing code, maximum coverage.

---

## Introduction

I have used a wide range of unit testing frameworks over the years.  With each one there is a collection of good and bad aspects.  One of the more destructive "bad" aspects is the difficulty of setting up a framework.  The longer and harder it is to use, the less likely a developer is to use a testing framework.

A number of years ago I ran across a short online page that described something so simple I couldn't believe it worked.  At [this page](http://www.jera.com/techinfo/jtns/jtn002.html) the author makes a small set of macros into a unit test framework that can be used in any C/C++ code base.  It doesn't do a lot of things, but what it does really well is allow a developer to setup a set of unit tests in minutes that just works.  No external requirements and it is only 4 lines of code.

Over time I found I wanted a little more granuality in the number of tests run.  I have added a subtest count so we know how many types of tests and how many individual tests have been run.  This provides me with a bit of feedback on how I'm doing in generating tests, and also strokes my ego when I see that number go up (more tests are a good thing, right? :-).

## Use

I have included a sample test file, but it is very simple to use it.  Create a test source file that does the following:

* `#include "minunit.h"`
* Create two global variables in the scope of the test file (I know, but this case is worth it).
** `int tests_run;`
** `int subtests_run;`
* Create a function to run all of the test sets from.  This can be called from main.
* Create functions of tests and call them with `mu_run_test` from the function above.



## License

The original page didn't have a license, just a release of the code in the text.  I have choosen a simple BSD license to try and stay in line with the author's original intent.

