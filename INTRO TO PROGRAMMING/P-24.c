//EXAMPLE OF FUNCTION WHICH DO NOT ACCEPTS AN ARGUMENT AND DO NOT RETURNS ANY VALUE
#include<stdio.h>
int add(){
    int a=10,b=20,sum;
    sum=a+b;
    printf("%d", sum);
}
int main(){
    add();
}