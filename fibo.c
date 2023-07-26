#include <stdio.h>

int main() {
    int n, i, firstTerm = 0, secondTerm = 1, nextTerm;

    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%d", &n);

    printf("Fibonacci Sequence: ");

    for (i = 0; i < n; i++) {
        if (i <= 1) {
            nextTerm = i;
        } else {
            nextTerm = firstTerm + secondTerm;
            firstTerm = secondTerm;
            secondTerm = nextTerm;
        }

        printf("%d", nextTerm);

        if (i < n - 1) {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}
