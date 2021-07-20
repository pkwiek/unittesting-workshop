"""A simple FIFO queue for unit testing workshop."""

class MyQueue:
    """Type representing a FIFO queue."""
    capacity = None     # Maximum number of items that can be stored in the memory of the queue.
    element_type = None # Type of an element in a queue.
    wridx = None        # Index in the items memory of the queue where next item is written.
    rdidx = None        # Index in the items memory of the queue where next item is read.

    def __init__(self, capacity, element_type):
        """
        Initializes a queue.

        :param: capacity        Capacity of the queue. This parameter must be no less than 2.
        :param: emement_type    Type of the elements stored in the queue.
        """
        pass

    def push_begin(self):
        """
        Returns the next item to be written to the queue.
             
        This function is to be used when writing data to the queue directly (no copy).
        Returned object is valid when the queue is not full (is_full returned False).
        To write an item to the queue perform following.

        if not: queue.is_full():
            item = queue.push_begin()
            ... item is now in memory of the queue, fill all data at item
            item.some_field = some_value
            ... fill all data of item
            queue.push_commit()
        
        To ensure thread-safety external locking is required.
        
        :return: Object to which data is to be written.
        """
        pass

    def push_commit(self):
        """Increments write pointer of the queue."""
        pass

    def pop_begin(self):
        """
        @brief Returns pointer to the next item to be read from the queue.

        This function is to be used when reading data from the queue directly (no copy).
        Returned object is valid when the queue is not empty (is_empty returned False).
        To ensure thread-safety external locking is required.

        To read an item from the queue perform following.
        if not queue.is_empty():
            p_item = queue.pop_begin();
            ... read & process data in item
            queue.pop_commit()

        :return: Object from the queue.
        """
        pass

    def pop_commit(self):
        """Increments read pointer of the queue."""
        pass


    def is_empty(self) -> bool:
        """
        Checks if the queue is empty.
        
        :return: True  When the queue is empty
        :return: False When the queue is not empty.
        """
        return False

    def is_full(self) -> bool:
        """
        Checks if the queue is full.

         :return: True  When the queue is full.
         :return: False When the queue is not full.
        """
        return False
