#include <limits.h>

void insertion_sort(int arr[], int length) {
    int i, j, key;
    for (i = 1; i < length; i++) {
        key = arr[i];        
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}


/*===================
SELECTION SORT
best-case:  \theta(n^2)
worst-case: \theta(n^2)
=====================*/

void selection_sort(int arr[], int length) {
    int i, j, aux;
    for (i = 0; i < length - 1; i++) {
        for (j = i + 1; j < length; j++) {
            if (arr[j] < arr[i]) {
                aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
    }
}


/*===================
LINEAR SEARCH
average-case: \theta(n) - it needs to check (n + 1)/2 elements on average
worst-case: \theta(n)
=====================*/

int linear_search(int arr[], int length, int value) {
    int i;
    for (i = 0; i < length; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}


void binary_addition(char num1[], char num2[], char result[], int length) {
    int i;
    char sum, carry;
    carry = 0;
    for (i = length - 1; i >= 0; i--) {
        sum = num1[i] + num2[i] + carry;
        carry = sum / 2; 
        sum %= 2;
        result[i + 1] = sum;
    }
    result[i + 1] = carry;
}

void merge_with_sentinel(int arr[], int p, int q, int r) {
    int n1, n2, i, j, k;

    n1 = q - p + 1;
    n2 = r - q;
    int left[n1 + 1], right[n2 + 1];

    for (i = 0; i < n1; i++) {
        left[i] = arr[p + i];
    }
    for (j = 0; j < n2; j++) {
        right[j] = arr[q + j + 1];
    }

    left[n1] = INT_MAX;
    right[n2] = INT_MAX;
    
    i = j = 0;
    for (k = p; k <= r; k++) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
    }
}

void merge(int arr[], int p, int q, int r) {
    int n1, n2, i, j, k;

    n1 = q - p + 1;
    n2 = r - q;
    int left[n1], right[n2];

    for (i = 0; i < n1; i++) {
        left[i] = arr[p + i];
    }
    for (j = 0; j < n2; j++) {
        right[j] = arr[q + j + 1];
    }

    i = j = 0;
    for (k = p; k <= r; k++) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
            if (i >= n1) {
                while (j < n2) { 
                    k++;
                    arr[k] = right[j];
                    j++;
                }
                break;
            }
        } else {
            arr[k] = right[j];
            j++;
            if (j >= n2) {
                while (i < n1) { 
                    k++;
                    arr[k] = left[i];
                    i++;
                }
                break;
            }
        }
    }
}

void merge_sort(int arr[], int p, int r) {
    int q;
    if (p < r) {
        q = (p + r) / 2;
        merge_sort(arr, p, q);
        merge_sort(arr, q + 1, r);
        merge(arr, p, q, r);
    }
}
