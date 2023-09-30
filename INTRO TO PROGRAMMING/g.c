// WAP IN C TO CALCULATE THE DISCRIMINATE OF AN EQUATION

#include<stdio.h>
int main(){
    float a,b,c,d;
    printf("ENTER THE VALUE OF A :");
    scanf("%f", &a);
    printf("ENTER THE VALUE OF B :");
    scanf("%f", &b);
    printf("ENTER THE VALUE OF C :");
    scanf("%f", &c);
    d=b*b-4*a*c;
    printf("THE VALUE OF DICRIMINATE IS %f", d);

}