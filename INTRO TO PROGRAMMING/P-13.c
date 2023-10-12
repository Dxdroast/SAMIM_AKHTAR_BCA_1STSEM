//Write a program in c to check whether a line is straight line or not.

#include<stdio.h>
int main()
{
    float y,m,x,c;
    printf("Enter the values of y: ");
    scanf("%f",&y);
    printf("Enter the values of m: ");
    scanf("%f",&m);
    printf("Enter the values of x: ");
    scanf("%f",&x);
    printf("Enter the values of c: ");
    scanf("%f",&c);

    float a=(m*x)+c;
    (y==a)?printf ("It's a equation of straight line"):printf ("It's not a equation of straight line");

}
