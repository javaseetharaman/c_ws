/*
 This program prints a pattern where each line contains
 an increasing number of the given character separated by spaces.

 For example, if the character is '*' and lines = 5, the output is:
 *
 * *
 * * *
 * * * *
 * * * * *
*/

#include <stdio.h>

int main() {
    char ch;
    int lines, i, j;

    // Input the character to print
    printf("Enter the character to print: ");
    scanf("%c", &ch);

    // Input the number of lines
    printf("Enter the number of lines: ");
    scanf("%d", &lines);

    // Nested loops to print the pattern
    for (i = 1; i <= lines; i++) {      // For each line
        for (j = 1; j <= i; j++) {      // Print characters increasing per line
            printf("%c ", ch);
        }
        printf("\n");
    }

    return 0;
}
