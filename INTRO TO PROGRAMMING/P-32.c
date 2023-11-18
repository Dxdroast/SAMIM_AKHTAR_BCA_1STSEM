// WAP IN C TO CALCULATE THE FACTORIAL OF N NUMBERS GIVEN BY USER USING FUNCTIONS
#include<stdio.h>
int fact(int n);
int main(){
    int n;
    printf("ENTER THE NUMBER TO CALCULATE THE FACTORIAL  : ");
    scanf("%d",&n);
    printf("THE FACTORIAL OF %d  IS : %d", n,fact(n));



    return 0;
}
int fact(int n){
    if (n==1){
        return 1;
    }
    int factNm1=fact(n-1);
    int factN=factNm1*n;
    return factN;
}