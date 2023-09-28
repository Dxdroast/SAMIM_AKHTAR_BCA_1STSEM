// WAP IN C TO FIND THE BIGGEST OF THREE NUMBERS USING TERNARY OPERATORS
#include<stdio.h>
int main(){
    int a,b,c;
    printf("ENTER FIRST NUMBER : ");
    scanf("%d", &a);
    printf("ENTER SECOND NUMBER : ");
    scanf("%d", &b);
    printf("ENTER THIRD NUMBER : ");
    scanf("%d", &c);
    (a>b && a>c)?printf("%d IS BIGGEST\n",a):
    (b>c&&b>a)?printf("%d IS BIGGEST\n",b):
    printf("%d IS BIGGEST\n",c);
}