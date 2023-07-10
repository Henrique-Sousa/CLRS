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
}

int main() {
    int arr[8];

    set_array(arr);
    printf("unsorted array: ");
    print_int_array(arr, 8);
    insertion_sort(arr, 8);
    printf("insertion sort: ");
    print_int_array(arr, 8);

    set_array(arr);
    printf("unsorted array: ");
    print_int_array(arr, 8);
    selection_sort(arr, 8);
    printf("selection sort: ");
    print_int_array(arr, 8);

    set_array(arr);
    printf("unsorted array: ");
    print_int_array(arr, 8);
    merge_sort(arr, 0, 7);
    printf("merge sort    : ");
    print_int_array(arr, 8);

    return 0;
}
