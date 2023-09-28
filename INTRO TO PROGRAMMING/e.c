// WAP IN C TO CHECK WHETHER A NUMBER IS NEGATIVE OR POSITIVE USING TERNARY OPERATORS

#include<stdio.h>
int main(){
    int num;
    printf("ENTER THE NUMBER :");
    scanf("%d", &num);
    (num>0)?printf("THE NUMBER IS POSITIVE \n"):(num==0)?printf("THE NUMBER IS NEUTRAL"):
    printf("THE NUMBER IS NEGATIVE");
}