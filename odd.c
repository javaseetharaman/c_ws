#include <stdio.h>

int main() {
    int n,i;

    // Prompt the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }

    printf("\nOdd numbers from 1 to %d are:\n", n);

    // Loop to print odd numbers
    for ( i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}

