// WAP IN C TO FIND THE GREATEST AMONG THREE NUMBERS
#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("ENTER FIRST NUMBER : ");
    scanf("%d",&num1);
    printf("ENTER SECOND NUMBER : ");
    scanf("%d",&num2);
    printf("ENTER THIRD NUMBER : ");
    scanf("%d",&num3);

    if (num1 >= num2 && num1 >= num3)
        printf("%d is the largest number.\n", num1);
    else if (num2 >= num1 && num2 >= num3)
        printf("%d is the largest number.\n", num2);
    else
        printf("%d is the largest number.\n", num3);

    return 0;
}
