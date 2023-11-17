// WAP IN C TO CALCULATE THE SUM OF N NATURAL NUMBERS USING FUNCTIONS
#include<stdio.h>
int sum(int n);
int main(){
    int n;
    printf("ENTER THE NUMBER TO CALCULATE THE SUM : ");
    scanf("%d",&n);
    printf("THE SUM OF %d IS : %d",n, sum(n));



    return 0;
}
int sum(int n){
    if (n==1){
        return 1;
    }
    int sumNm1=sum(n-1);
    int sumN=sumNm1+n;
    return sumN;
}