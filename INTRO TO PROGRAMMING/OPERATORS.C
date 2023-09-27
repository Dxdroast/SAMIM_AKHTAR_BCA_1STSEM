#include <stdio.h>

int main() {
    int a = 10, b = 5;

    // Relational Operators
    printf("Relational Operators:\n");
    printf("%d > %d is %d\n", a, b, a > b);
    printf("%d < %d is %d\n", a, b, a < b);
    printf("%d >= %d is %d\n", a, b, a >= b);
    printf("%d <= %d is %d\n", a, b, a <= b);
    printf("%d == %d is %d\n", a, b, a == b);
    printf("%d != %d is %d\n", a, b, a != b);

    // Bitwise Operators
    printf("\nBitwise Operators:\n");
    printf("%d & %d is %d\n", a, b, a & b);
    printf("%d | %d is %d\n", a, b, a | b);
    printf("%d ^ %d is %d\n", a, b, a ^ b);
    printf("~%d is %d\n", a, ~a);

    // Logical Operators
    printf("\nLogical Operators:\n");
    printf("%d && %d is %d\n", a > b, a < b, a > b && a < b);
    printf("%d || %d is %d\n", a > b, a < b, a > b || a < b);
    printf("!(%d > %d) is %d\n", a, b, !(a > b));

    // Shift Operators
    printf("\nShift Operators:\n");
    printf("%d << 2 is %d\n", a, a << 2);
    printf("%d >> 2 is %d\n", a, a >> 2);

    return 0;
}
