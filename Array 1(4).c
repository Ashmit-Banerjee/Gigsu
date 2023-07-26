#include <stdio.h>

int main() {
    int arr[25];
    int n, i, searchNumber, count = 0;

    // Input 25 numbers into the array
    printf("Enter 25 numbers into the array:\n");
    for (i = 0; i < 25; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the number to be searched
    printf("Enter the number to be searched: ");
    scanf("%d", &searchNumber);

    // Check if the number is present in the array and count its occurrences
    for (i = 0; i < 25; i++) {
        if (arr[i] == searchNumber) {
            count++;
        }
    }

    // Display the result
    if (count > 0) {
        printf("%d is present in the array.\n", searchNumber);
        printf("It appears %d time(s) in the array.\n", count);
    } else {
        printf("%d is not present in the array.\n", searchNumber);
    }

    return 0;
}