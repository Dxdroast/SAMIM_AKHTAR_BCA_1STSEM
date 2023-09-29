// WAP IN C TO PRINT SUM OF N NUMBERS GIVEN BY THE USER
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for (int i=1;i<=n;i++) {
        sum =sum+i;
    }

    printf("THE SUM OF  %d IS: %d\n", n, sum);

    return 0;
}
