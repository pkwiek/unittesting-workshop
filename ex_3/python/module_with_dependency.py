import time
from api import api_call, SlowClass


def uses_api_call():
    return api_call()


def uses_slow_compute():
    slow_class = SlowClass()
    slow_class.slow_compute()
    return slow_class.data
