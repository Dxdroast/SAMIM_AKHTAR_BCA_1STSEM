//WAP IN C TO CHECK THE NUMBER IS PRIME OR COMPISITE USING FOR LOOP
#include<stdio.h>
int main(){
    int num,temp=0;
    printf("ENTER THE NUMBER TO CHECK PRIME OR COMPOSITE");
    scanf("%d",&num);
    for(int i=2;i<num;i++){
        if(num%i==0){
            temp++;
            break;
        }
    }
    if(temp==0){
        printf("IT IS A PRIME NUMBER \n ");

    }
    else{
        printf("IT IS A COMPOSITE NUMBER");
    }
    return 0;
}