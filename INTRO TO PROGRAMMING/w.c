// WAP IN C TO CHECK THE NUMBERS ARE AMICABLE OR NOT
#include<stdio.h>
int main(){
    int num1,num2,sum1=0,sum2=0;
    printf("ENTER THE FIRST NUMBER : ");
    scanf("%d",&num1);
    printf("ENTER THE SECOND NUMBER : ");
    scanf("%d",&num2);
    for(int i=1;i<num1;i++){
        if(num1%i==0){
            sum1=sum1+i;
        }
    }
    for(int i=1;i<num2;i++){
        if(num2%i==0){
            sum2=sum2+i;
        }
    }
    if (sum1==num2 && sum2==num1)
    {
        printf("BOTH THE NUMBERS ARE AMICABLE \n");
    }
    else{
        printf("BOTH THE NUMBERS ARE NOT AMICABLE \n");
    }
    
    
    
}