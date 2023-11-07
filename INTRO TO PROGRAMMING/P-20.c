//
// Created by sa692 on 31-10-2023.
//
#include <stdio.h>

// a) Tree Recursion
void treeRecursion(int n) {
    if (n > 0) {
        printf("%d ", n);
        treeRecursion(n - 1);
        treeRecursion(n - 1);
    }
}

// b) Direct Recursion
void directRecursion(int n) {
    if (n > 0) {
        printf("%d ", n);
        directRecursion(n - 1);
    }
}

// c) Indirect Recursion
void functionB(int n);

void functionA(int n) {
    if (n > 0) {
        printf("%d ", n);
        functionB(n - 1);
    }
}

void functionB(int n) {
    if (n > 1) {
        printf("%d ", n);
        functionA(n / 2);
    }
}

// d) Tail Recursion
void tailRecursion(int n, int k) {
    if (n > 0) {
        printf("%d ", k);
        tailRecursion(n - 1, k + 1);
    }
}

int main() {
    int choice, n;

    printf("Choose a type of recursion (1-4):\n");
    printf("1. Tree Recursion\n");
    printf("2. Direct Recursion\n");
    printf("3. Indirect Recursion\n");
    printf("4. Tail Recursion\n");
    scanf("%d", &choice);

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    switch (choice) {
        case 1:
            treeRecursion(n);
            break;
        case 2:
            directRecursion(n);
            break;
        case 3:
            functionA(n);
            break;
        case 4:
            tailRecursion(n, 1);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}