/*
 This program takes a 5-digit number as input,
 extracts each digit,
 sums them up,
 and prints the total sum of the digits.
*/

#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    // Check if number is 5-digit
    if (num < 10000 || num > 99999) {
        printf("Error: Please enter a valid 5-digit number.\n");
        return 1; // Exit with error code
    }

    // Extract and sum digits
    for (int i = 0; i < 5; i++) {
        digit = num % 10;  // get last digit
        sum += digit;      // add to sum
        num /= 10;         // remove last digit
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
