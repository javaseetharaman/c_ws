#include <stdio.h>

int main() {
    int arr[100], n, i, j, temp;

    // Get number of elements
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    // Input validation
    if (n <= 0 || n > 100) {
        printf("Invalid number of elements. Please enter a value between 1 and 100.\n");
        return 1;
    }

    // Input elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble sort: ascending order
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Output sorted array
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}

