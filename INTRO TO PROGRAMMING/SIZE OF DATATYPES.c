#include <stdio.h>

int main() {
    printf("Size of Data Types in C (in bytes):\n");

    printf("Size of char: %d byte(s)\n", sizeof(char));
    printf("Size of short: %d byte(s)\n", sizeof(short));
    printf("Size of int: %d byte(s)\n", sizeof(int));
    printf("Size of long: %d byte(s)\n", sizeof(long));
    printf("Size of long long: %d byte(s)\n", sizeof(long long));
    printf("Size of float: %d byte(s)\n", sizeof(float));
    printf("Size of double: %d byte(s)\n", sizeof(double));
    printf("Size of long double: %d byte(s)\n", sizeof(long double));
    
    return 0;
}

