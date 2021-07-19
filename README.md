# unittesting_workshop

## ex_0 - experiment with the concept of unit testing

You are provided with a source code taken from Nordic's IEEE 802.15.4 Radio Driver.
The code has its corresponding unit tests. The goal is to try out how unit tests work.
E.g. Introduce a bug and find out if the tests catch it. If not then a point for you,
you have found an untested patch of code, otherwise check if tests' results point
in a right direction to solve the bug.

```
ceedling clean
ceedling test:all
```
