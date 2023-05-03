#include "utils.h"
#include "algorithms.h"

int main() {
    int arr[] = {5, 2, 4, 6, 1, 3};
    insertion_sort(arr, 6);
    print_int_array(arr, 6);
    return 0;
}
