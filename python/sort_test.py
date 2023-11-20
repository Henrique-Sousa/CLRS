import unittest
from algorithms import * 

arr = [3, 41, 52, 26, 38, 57, 9, 49, 34]
sorted_arr = [3, 9, 26, 34, 38, 41, 49, 52, 57]

class TestSortingMethods(unittest.TestCase):

    def test_insertion_sort(self):
        self.assertEqual(insertion_sort(arr), sorted_arr)

if __name__ == '__main__':
    unittest.main()
