// WAP IN C TO CHECK THE FACTOR OF GIVEN NUMBER
#include<stdio.h>
int main(){
    int num1,num2,sum1=0,sum2=0;
    printf("ENTER THE FIRST NUMBER : ");
    scanf("%d",&num1);
    
    for(int i=1;i<num1;i++){
        if(num1%i==0){
            printf("%d\n", i);
        }
    }
    
    
    
    
}