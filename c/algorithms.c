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
