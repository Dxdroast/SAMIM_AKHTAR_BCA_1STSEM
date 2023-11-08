// EXAMPLE OF FUNCTION WHICH ACCEPTS VALUE AND RETURNS NOTHING
#include<stdio.h>
int add(int a, int b){
    int sum=a+b;
    printf("THE VALUE OF SUM IS %d", sum);
}
int main(){
    int a ,b;
    printf("ENTER THE VALUE OF A : \n");
    scanf("%d", &a);
    printf("ENTER THE VALUE OF B : \n");
    scanf("%d", &b);
    add(a,b);
}