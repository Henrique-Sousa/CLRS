#include <stdio.h>
#include "algorithms.h"

int main() {
    int arr[] = {5, 2, 4, 6, 1, 3};
    printf("%d\n", linear_search(arr, 6, 1));
    printf("%d\n", linear_search(arr, 6, 4));
    return 0;
}
