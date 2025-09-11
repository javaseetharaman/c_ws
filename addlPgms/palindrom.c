/*
 A palindrome is a word, phrase, number, or sequence of characters
 that reads the same forwards and backwards.

 For example:
 - "madam"
 - "racecar"
 - "121"
 
 The program checks if the given string is a palindrome by comparing
 characters from the start and end moving towards the center.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char choice = 'Y';  // to control repetition

    while (choice != 'N' && choice != 'n') {
        int len, i, isPalindrome = 1;

        // Input string
        printf("Enter a string: ");
        fgets(str, sizeof(str), stdin);

        // Remove trailing newline from fgets if present
        len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0';
            len--;
        }

        // Check palindrome by comparing characters from both ends
        for (i = 0; i < len / 2; i++) {
            if (str[i] != str[len - 1 - i]) {
                isPalindrome = 0;
                break;
            }
        }

        if (isPalindrome) {
            printf("The string \"%s\" is a palindrome.\n", str);
        } else {
            printf("The string \"%s\" is NOT a palindrome.\n", str);
        }

        // Ask user whether to continue or not
        printf("Do you want to check another string? (Y/N): ");
        scanf(" %c", &choice);

        // Clear input buffer after scanf (to handle leftover newline)
        while (getchar() != '\n');
    }

    printf("Program ended.\n");
    return 0;
}
