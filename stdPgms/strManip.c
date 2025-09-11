#include <stdio.h>

// Function to calculate the length of a string
int string_length(const char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Function to reverse the string in place
void string_reverse(char str[]) {
    int start = 0;
    int end = string_length(str) - 1;
    char temp;

    while (start < end) {
        // Swap characters at start and end
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char str[100];

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    int len = string_length(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    // Print string length
    printf("Length of the string: %d\n", string_length(str));

    // Reverse and print string
    string_reverse(str);
    printf("Reversed string: %s\n", str);

    return 0;
}

