#include<stdio.h>
int calcpercentage(int math,int sanskrit, int english);
int main(){
    int m,s,e;
    printf("ENTER THE MARKS OF MATH : ");
    scanf("%d",&m);
    printf("ENTER THE MARKS OF SANSKRIT : ");
    scanf("%d",&s);
    printf("ENTER THE MARKS OF ENGLISH : ");
    scanf("%d",&e);
    printf("OVERALL PERCENTAGE IS : %d percent", calcpercentage(m,s,e));
    return 0;
}
int calcpercentage(int math,int sanskrit , int english){
    return (( math + sanskrit + english ) / 3 );
    
}