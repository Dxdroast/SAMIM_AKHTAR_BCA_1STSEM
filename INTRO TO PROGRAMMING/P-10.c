//Write a program in c to print the memory addresses of 5 variables.
#include<stdio.h>
int main()
{
int a=10,b=20, c=30, d=40, e=60;

printf("%p\n",&a);
printf("%p\n",&b);
printf("%p\n",&c);
printf("%p\n",&d);
printf("%p\n",&e);
}