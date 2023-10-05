// WAP IN C TO READ THE NUMBERS FROM USER UNTIL -1 IS ENCOUNTER ALSO CALCULATE THE SUM OF ALL THE NUMBERS
#include<stdio.h>
int main(){
    int sum=0;
    int num;
    while(1){
        printf("ENTER THE NUMBER : \n");
        scanf("%d", &num);
        if(num==-1){
            break;
        }
        sum=sum+num;

    }
    printf("THE SUM IS : %d", sum);
}