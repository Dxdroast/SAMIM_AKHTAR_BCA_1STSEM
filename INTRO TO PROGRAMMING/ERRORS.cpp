#include <stdio.h>

int main() {
    // Syntax Error: Missing semicolon
    printf("Syntax Error Demonstration\n")
    
    // Logical Error: Incorrect logic for adding numbers
    int num1 = 10;
    int num2 = 20;
    int sum = num1 - num2; // Should be num1 + num2
    printf("Logical Error: Sum of %d and %d is %d\n", num1, num2, sum);
    
    // Runtime Error: Division by zero
    int dividend = 10;
    int divisor = 0;
    int result = dividend / divisor; // Division by zero
    printf("Runtime Error: Result of division is %d\n", result);
    
    // Semantic Error: Incorrect variable type for print format
    char character = 'A';
    printf("Semantic Error: Character as integer: %d\n", character);

    return 0;
}

