#include "utils.h"
#include "algorithms.h"

void set_array(int arr[]) {
    arr[0] = 5;
    arr[1] = 2;
    arr[2] = 4;
    arr[3] = 6;
    arr[4] = 1;
    arr[5] = 3;
}

int main() {
    int arr[6];

    set_array(arr);
    print_int_array(arr, 6);
    insertion_sort(arr, 6);
    print_int_array(arr, 6);

    set_array(arr);
    print_int_array(arr, 6);
    selection_sort(arr, 6);
    print_int_array(arr, 6);

    return 0;
}
