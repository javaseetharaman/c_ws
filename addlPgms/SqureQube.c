#include <stdio.h>

int main() {
    int n, i;

    // Input the upper limit n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    printf("Number\tResult\n");
    printf("-----------------\n");

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            // Even number - print cube
            printf("%d\t%d\n", i, i * i * i);
        } else {
            // Odd number - print square
            printf("%d\t%d\n", i, i * i);
        }
    }

    return 0;
}
