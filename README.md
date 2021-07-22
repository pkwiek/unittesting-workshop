# unittesting-workshop

## setup

### C
To install ceedling call
```
gem install ceedling
```

Once the installation is complete you can confirm it with
```
ceedling version
```

### Python
To create and use virtual environment
```
python3 -m venv ut_env
source ut_env/bin/activate
python -m pip install -r requirements.txt
```

Once the installation is complete you can confirm it with
```
pytest --version
```

## ex_0 - experiment with the concept of unit testing

You are provided with a source code taken from Nordic's IEEE 802.15.4 Radio Driver.
The code has its corresponding unit tests. The goal is to try out how unit tests work.
E.g. Introduce a bug and find out if the tests catch it. If not then a point for you,
you have found an untested patch of code, otherwise check if tests' results point
in a right direction to solve the bug.

To run tests after modifications call below commands inside `ex_0` directory.
```
ceedling clean
ceedling test:all
```

## ex_1c - setup your first test

You will setup and create your first test. From `ex_1` directory call:
```
ceedling new c
```
to create a new ceedling project in `c` directory. Then inside `c` directory
```
ceedling module:create[first_test]
```
to create a module consisting of `.c`, `.h` files for the module and a `.c` file for tests.
In the file `test/first_test.c` add a function `test_my_first_test` (`test_` prefix is required)
and try running the test by 
```
ceedling test:all
```
The test should pass. Then add a function returning something (it can be an integer or a boolean,
or whatever) to `first_test.c` and its signature to `first_test.h`. Call the function in the test
and compare its return value to a value that is not returned, e.g. function returns `1` and the
return value is compared to `2`, with
```
/* in first_test.c */
uint32_t my_function(void)
{
    return 1UL;
}

/* in test_first_test.c */
void test_my_first_test(void)
{
    TEST_ASSERT_EQUAL(2UL, my_function());
}
```
The test should fail. Now make it pass. This is how you can use unit tests to find
code not working as expected. You can experiment with this a little more.
Ceedling has a command that generates a fully tested example if you want to see more advanced case
```
ceedling example temp_sensor
```

## ex_1p - setup your first test

You will setup and create your first test. In `ex_1/python` directory create files
`test_first_test.py`, `first_test.py`. Contents of `test_first_test.py` should look something like
```
import pytest
import first_test

def test_method():
    pass
```
Try running it by
```
pytest
```
The test should pass. Then add a function returning something (it can be an integer or a boolean,
or whatever) to `first_test.py`. Call the function in the test and compare its return value to a
value that is not returned, e.g. function returns `1` and the return value is compared to `2`, with
```
/* in first_test.py */
def my_function():
    return 1

/* in test_first_test.py */
def test_method()
    assert(2 == first_test.my_function())
```
The test should fail. Now make it pass. This is how you can use unit tests to find
code not working as expected. You can experiment with this a little more.

## ex_2

Your goal is to write a simple queue module. A queue should allow for pushing and popping in
a transactional manner. Test your code using unit tests. Think of what can be checked, e.g. whether
the queue is created empty, what should happen if a write to a full queue is attempted.
In the test file there is an example of setup function for C and its counterpart for Python,
a fixture. Experiment with asserting on invalid input.

## ex_3c

Your goal is to use a substitute a dependency that is not so easily tested, e.g. use of a peripheral.
The module you are testing needs to control a pin. It is a very simple task, however there are no
pins on you host machine. From `ex_3/c` directory run the tests with
```
ceedling options:nrf52840 test:all
```
You can see there is an additional `options:nrf52840` which tells ceedling which file is describing
a variant of the module that is tested. Let's assume there is some other pin that needs to be driven
in case of other board. Your Ceedling project is already setup for this task, as it contains required
defines and a header file to mock. Mock a call with
```
<name_of_mocked_function>_ExpectAndReturn(<what_is_expected>, <returned_value>);
```
Mocking a dependency is not always as easy as in this example.

## ex_3p

Your goal is to use a substitute a dependency that is not so easily tested, e.g. call to an external server
or an interaction with a DUT. You are provided with code that presents how to use mocks in pytest. Modules
in the example are
```
module_with_dependency.py   <- module under test
api.py                      <- module with an external, time consuming API
```
Run pytest. You should observe errors and how long it take to perform only two tests.
Uncomment lines of code, they are described with an appropriate comment and rerun the tests. 
If you want to learn more about mocking with pytest, read about `pytest-mock`.
Mocking a dependency is not always as easy as in this example.
