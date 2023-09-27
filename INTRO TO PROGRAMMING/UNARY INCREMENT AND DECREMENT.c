#include <stdio.h>

int main() {
    int num = 5;

    // Demonstrate the unary increment operator (++)
    printf("Initial value of num: %d\n", num);
    num++; // Increment num by 1
    printf("After incrementing (num++): %d\n", num);
    ++num; // Increment num by 1
    printf("After incrementing (++num): %d\n", num);

    // Demonstrate the unary decrement operator (--)
    num--; // Decrement num by 1
    printf("After decrementing (num--): %d\n", num);
    --num; // Decrement num by 1
    printf("After decrementing (--num): %d\n", num);

    return 0;
}

