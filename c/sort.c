#include "utils.h"
#include "algorithms.h"

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

int main() {
    int arr[8];

    set_array(arr);
    print_int_array(arr, 8);
    insertion_sort(arr, 8);
    print_int_array(arr, 8);

    set_array(arr);
    print_int_array(arr, 8);
    selection_sort(arr, 8);
    print_int_array(arr, 8);

    set_array(arr);
    print_int_array(arr, 8);
    merge_sort(arr, 0, 7);
    print_int_array(arr, 8);

    return 0;
}
