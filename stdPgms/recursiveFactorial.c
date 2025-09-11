#include <stdio.h>

// Recursive function to calculate factorial
unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;

    // Input from user
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Validate input
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    // Calculate and display result
    printf("Factorial of %d is: %llu\n", num, factorial(num));

    return 0;
}

