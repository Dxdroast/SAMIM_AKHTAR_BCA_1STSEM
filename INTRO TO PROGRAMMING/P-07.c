//WRITE A PROGRAMME IN C TO FIND THE SUM OF TWO NUMBERS USING FUNCTION
#include<stdio.h>
int add(int a,int b){
    int sum=a+b;
    return sum;
}
int main(){
    int a,b;
    printf("ENTER THE VALUE OF A : ");
    scanf("%d", &a);
    printf("ENTER THE VALUE OF B : ");
    scanf("%d", &b);
    int val=add(a,b);
    printf("%d", val);

}