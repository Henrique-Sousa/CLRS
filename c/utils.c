#include <stdio.h>

void print_array(int arr[], int length) {
    int i;
    for (i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
