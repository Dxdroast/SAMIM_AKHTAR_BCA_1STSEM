#include <stdio.h>

int main() {
    int num, shiftValue;

    // Input a number from the user
    printf("Enter an integer number: ");
    scanf("%d", &num);

    // Input a shift value from the user
    printf("Enter a shift value (positive for left shift, negative for right shift): ");
    scanf("%d", &shiftValue);

    // Perform left shift and display the result
    int leftShifted = num << shiftValue;
    printf("Left Shift Result: %d << %d = %d\n", num, shiftValue, leftShifted);

    // Perform right shift and display the result
    int rightShifted = num >> shiftValue;
    printf("Right Shift Result: %d >> %d = %d\n", num, shiftValue, rightShifted);

    return 0;
}

