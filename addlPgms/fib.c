/*
 The Fibonacci series is a sequence of numbers where each number 
 is the sum of the two preceding ones, starting from 1 and 1.

 Example: 1, 1, 2, 3, 5, 8, 13, 21, ...

 This program uses a recursive function to calculate Fibonacci numbers,
 and prints all Fibonacci numbers up to the given limit n.
*/

#include <stdio.h>

// Recursive function to find the nth Fibonacci number
int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;  // Base cases: first and second Fibonacci numbers are 1
    }
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case
}

int main() {
    int n, i = 1;
    int fib;

    printf("Enter the upper limit n: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d:\n", n);

    // Print Fibonacci numbers using recursion until exceeding n
    while (1) {
        fib = fibonacci(i);
        if (fib > n) {
            break;
        }
        printf("%d ", fib);
        i++;
    }

    printf("\n");
    return 0;
}
