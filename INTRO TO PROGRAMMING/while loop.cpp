#include <stdio.h>

int main() {
    int start, end;

    // Prompt the user for the range
    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Even numbers in the range %d to %d are:\n", start, end);

    // Ensure that start is even
    if (start % 2 != 0) {
        start++; // Make start even if it's not
    }

    // Use a while loop to print even numbers in the range
    while (start <= end) {
        printf("%d ", start);
        start += 2; // Increment by 2 to get the next even number
    }

    printf("\n");

    return 0;
}

