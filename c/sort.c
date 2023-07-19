#include <stdio.h>
#include "utils.h"
#include "algorithms.h"

/*
void set_array(int arr[]) {
    arr[0] = 2;
    arr[1] = 4;
    arr[2] = 5;
    arr[3] = 7;
    arr[4] = 1;
    arr[5] = 2;
    arr[6] = 3;
    arr[7] = 6;
}
*/

void set_array(int arr[]) {
    arr[0] = 3;
    arr[1] = 41;
    arr[2] = 52;
    arr[3] = 26;
    arr[4] = 38;
    arr[5] = 57;
    arr[6] = 9;
    arr[7] = 49;
    arr[8] = 34;
}

int main() {
    const unsigned char s = 9;
    int arr[s];

    set_array(arr);
    printf("unsorted array: ");
    print_int_array(arr, s);
    insertion_sort(arr, s);
    printf("insertion sort: ");
    print_int_array(arr, s);

    set_array(arr);
    printf("unsorted array: ");
    print_int_array(arr, s);
    selection_sort(arr, s);
    printf("selection sort: ");
    print_int_array(arr, s);

    set_array(arr);
    printf("unsorted array: ");
    print_int_array(arr, s);
    merge_sort(arr, 0, s);
    printf("merge sort    : ");
    print_int_array(arr, s);

    set_array(arr);
    printf("unsorted array: ");
    print_int_array(arr, s);
    merge_sort_with_sentinel(arr, 0, s);
    printf("merge sort with sentinel: ");
    print_int_array(arr, s);

    return 0;
}
