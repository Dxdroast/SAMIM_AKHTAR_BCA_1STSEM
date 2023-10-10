// wap in c to find all the odd numbers within specific range
#include<stdio.h>
int main(){
    int n,start,stop,i;
    printf("ENTER THE START VALUE : ");
    scanf("%d", &start);
    printf("ENTER THE STOP VALUE : ");
    scanf("%d", &stop);
    for(i=start;i<stop;i=i+2)
    printf(" %d\n", i);
    

}