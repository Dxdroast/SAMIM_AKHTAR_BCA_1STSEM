// WAP IN C TO CHECK WHETHER THE NUMBER IS EVEN OR ODD USING TERNARY OPERATOR
#include<stdio.h>
int main(){
    int num;
    printf("ENTER THE NUMBER : ");
    scanf("%d", &num);
    (num%2==0)?printf("NUMBER IS EVEN \n"):printf("NUMBER IS ODD");
}