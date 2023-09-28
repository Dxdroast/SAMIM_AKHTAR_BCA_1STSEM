// WAP IN C TO CHECKH WHETHER THEYEAR IS LEAP YEAR OR NOT USING TERNARY OPERATOR
#include<stdio.h>
int main(){
    int year;
    printf("ENTER THE YEAR !");
    scanf("%d",&year);
    (year%4==0)?printf("THE YEAR IS LEAP YEAR\n"):printf("THE YEAR IS NOT LEAP YEAR\n");
}