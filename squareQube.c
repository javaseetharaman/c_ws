#include <stdio.h>

int main() {
    int n;
    int i;

    // Prompt the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }

    // Display the table header
    printf("\nNumber\tSquare\tCube\n");
    printf("--------------------------\n");

    // Loop to calculate and print square and cube
    for ( i = 1; i <= n; i++) {
        printf("%d\t%d\t%d\n", i, i * i, i * i * i);
    }

    return 0;
}

