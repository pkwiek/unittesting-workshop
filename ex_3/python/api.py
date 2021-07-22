import time


def api_call():
    time.sleep(10)
    return 2

class SlowClass:
    def __init__(self):
        self.data = None

    def slow_compute(self):
        time.sleep(5)
        self.data = 'slow data'
