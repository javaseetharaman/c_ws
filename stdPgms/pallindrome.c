#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    // Input a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Validate input
    if (num < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    original = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // Check if original number is equal to its reverse
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}

