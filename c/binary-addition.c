#include "utils.h"
#include "algorithms.h"

int main() {
    char num1[] = {1, 0, 1};
    char result1[] = {0, 0, 0, 0};
    binary_addition(num1, num1, result1, 3);
    print_char_array(result1, 4);
    char num2[] = {1, 0, 1, 0};
    char num3[] = {1, 1, 1, 0};
    char result2[] = {0, 0, 0, 0, 0};
    binary_addition(num2, num3, result2, 4);
    print_char_array(result2, 5);
    return 0;
}
