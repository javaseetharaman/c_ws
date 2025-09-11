#include <stdio.h>

int main() {
    int marks;
    char grade;

    // Get marks from the user
    printf("Enter marks (0 to 100): ");
    scanf("%d", &marks);

    // Validate input
    if (marks < 0 || marks > 100) {
        printf("Invalid input. Marks should be between 0 and 100.\n");
        return 1;
    }

    // Determine grade using switch
    switch (marks / 10) {
        case 10: // For 100
        case 9:
        case 8:
            grade = 'A';
            break;
        case 7:
        case 6:
            grade = 'B';
            break;
        case 5:
            grade = 'C';
            break;
        case 4:
            grade = 'D';
            break;
        default:
            grade = 'F';
    }

    // Display the grade
    printf("Grade: %c\n", grade);

    return 0;
}

