//
// Created by sa692 on 31-10-2023.
//
#include <stdio.h>

void printNumbers(int n) {
    if (n > 0) {
        printf("%d ", n);
        printNumbers(n - 1);
    }
}

int main() {
    int start = 10;
    printf("Numbers from 10 to 1 in reverse order: ");
    printNumbers(start);
    return 0;
}