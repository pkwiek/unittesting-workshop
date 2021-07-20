from my_queue import MyQueue
import pytest

@pytest.fixture
def full_queue():
    # Just an example
    queue_capacity = 10
    queue_element_type = type(8)
    queue = MyQueue(queue_capacity, queue_element_type)
    # Make the queue full
    return queue

def test_queue_is_created_empty():
    pass
