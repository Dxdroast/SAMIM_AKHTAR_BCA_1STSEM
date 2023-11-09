// EXAMPLE OF FUNCTION WHICH DO NOT ACCEPTS AN ARGUMENT AND RETURNS A  VALUE
#include<stdio.h>
int add(){
    int a =10, b=20,sum;
    sum=a+b;
    return sum;
}
int main(){
    int c=add();
    printf("%d",c);
}