#include <stdio.h>

int main() {
    int arr[25];
    int n, i, max, secondMax;

    // Input the size of the array
    printf("Enter the number of elements in the array (up to 25): ");
    scanf("%d", &n);

    if (n > 25) {
        printf("Error: The number of elements should be at most 25.\n");
        return 1;
    }

    // Input the elements into the array
    printf("Enter %d elements into the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and secondMax to the first two elements of the array
    max = arr[0];
    secondMax = arr[1];

    // Find the maximum and the second maximum number in the array
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }

    // Display the results
    printf("Maximum number: %d\n", max);
    printf("Second maximum number: %d\n", secondMax);

    return 0;
}

