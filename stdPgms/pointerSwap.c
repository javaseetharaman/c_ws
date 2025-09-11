#include <stdio.h>

// Swap function
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    // Function pointer declaration and initialization
    void (*swap_ptr)(int *, int *) = &swap;

    // Input values
    printf("Enter two integers:\n");
    scanf("%d %d", &x, &y);

    // Show original values
    printf("Before swap: x = %d, y = %d\n", x, y);

    // Call swap using function pointer
    swap_ptr(&x, &y);

    // Show swapped values
    printf("After swap:  x = %d, y = %d\n", x, y);

    return 0;
}

