/Write a program in c to change the value of a variable by taking an input from the user.
#include <stdio.h>

int main() {
    int a = 10;
    printf("The old value of a is: %d\n",a);
    printf("Enter a new value for a: ");
    scanf("%d", &a);
    printf("New value of a is: %d\n", a);
    return 0;
}
