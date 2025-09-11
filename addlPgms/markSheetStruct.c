#include <stdio.h>

// Define a structure for Student
struct Student {
    int marks[5];
    int total;
    float average;
    char grade;
};

int main() {
    struct Student students[3];
    int i, j;

    // Input marks and calculate total, average, and grade
    for (i = 0; i < 3; i++) {
        printf("\nEnter marks for 5 subjects of Student %d:\n", i + 1);
        students[i].total = 0;

        for (j = 0; j < 5; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
            students[i].total += students[i].marks[j];
        }

        students[i].average = students[i].total / 5.0;

        // Assign grade based on average
        if (students[i].average >= 90)
            students[i].grade = 'A';
        else if (students[i].average >= 80)
            students[i].grade = 'B';
        else if (students[i].average >= 70)
            students[i].grade = 'C';
        else if (students[i].average >= 60)
            students[i].grade = 'D';
        else
            students[i].grade = 'F';
    }

    // Print the result
    printf("\n------ STUDENT RESULTS ------\n");
    for (i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Marks: ");
        for (j = 0; j < 5; j++) {
            printf("%d ", students[i].marks[j]);
        }
        printf("\nTotal: %d", students[i].total);
        printf("\nAverage: %.2f", students[i].average);
        printf("\nGrade: %c\n", students[i].grade);
    }

    return 0;
}
