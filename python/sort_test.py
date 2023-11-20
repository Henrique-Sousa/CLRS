import unittest
from algorithms import * 

arr = [3, 41, 52, 26, 38, 57, 9, 49, 34]
max_first = [57, 41, 52, 26, 38, 3, 9, 49, 34]
descending = [57, 52, 49, 41, 38, 34, 26, 9, 3]
sorted_arr = [3, 9, 26, 34, 38, 41, 49, 52, 57]

class TestSortingMethods(unittest.TestCase):

    def test_insertion_sort(self):
        self.assertEqual(insertion_sort(arr), sorted_arr)

    def test_insertion_sort_max_first(self):
        self.assertEqual(insertion_sort(max_first), sorted_arr)

    def test_insertion_sort_descending(self):
        self.assertEqual(insertion_sort(descending), sorted_arr)

    def test_insertion_sort_already_sorted(self):
        self.assertEqual(insertion_sort(sorted_arr), sorted_arr)

if __name__ == '__main__':
    unittest.main()
