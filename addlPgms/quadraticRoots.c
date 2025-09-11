#include <stdio.h>

int main() {
    double x, fx;
    double tolerance = 0.0001;
    int found = 0;

    // Try values from -100 to 100 in steps of 0.01
    for (x = -100; x <= 100; x += 0.01) {
        fx = x*x - 5*x + 6;

        // Check if fx is close enough to 0 (within ±tolerance)
        if (fx > -tolerance && fx < tolerance) {
            printf("One real root found: x = %.2f\n", x);
            found = 1;
            break;  // Stop after finding one root
        }
    }

    if (!found) {
        printf("No root found in the given range.\n");
    }

    return 0;
}
