#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[1000];
    int alphabets = 0, digits = 0, specialChars = 0;
    int i = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);  // Read a line of text

    while (sentence[i] != '\0') {
        if (isalpha(sentence[i])) {
            alphabets++;
        } else if (isdigit(sentence[i])) {
            digits++;
        } else if (!isspace(sentence[i])) {
            // Not a space, not an alphabet or digit = special character
            specialChars++;
        }
        i++;
    }

    printf("\nAlphabets: %d", alphabets);
    printf("\nDigits: %d", digits);
    printf("\nSpecial Characters: %d\n", specialChars);

    return 0;
}
