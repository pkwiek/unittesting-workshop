import pytest

from module_with_dependency import uses_api_call, uses_slow_compute

def test_mock_a_dependency(mocker):
    # Uncomment to see results of mocking
    #mocker.patch(
    #    # api_call is from module_with_dependency.py but imported to main.py
    #    'module_with_dependency.api_call',
    #    return_value=5
    #)

    expected = 5
    actual = uses_api_call()
    assert expected == actual

def test_mock_a_class_method(mocker):
    expected = 'xyz'

    def mock_compute(self):
        self.data = 'xyz'

    # Uncomment to see results of mocking
    #mocker.patch(
    #    # Dataset is in slow.py, but imported to main.py
    #    'module_with_dependency.SlowClass.slow_compute',
    #    mock_compute
    #)
    actual = uses_slow_compute()
    assert expected == actual
