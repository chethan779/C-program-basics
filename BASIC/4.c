#include <stdio.h>

int main() {
    int a = 5, b = 2;
    float result;

    result = (float)a / b; // cast a to float before division
    printf("Result = %.2f\n", result);

    return 0;
}