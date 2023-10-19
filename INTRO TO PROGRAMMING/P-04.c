// WAP IN C TO PRINT THE FIBONACCI SERIES
#include<stdio.h>
int main(){
    int limit,temp1=1,temp2=1,backup;
    printf("ENTER THE LIMIT : ");
    scanf("%d",&limit);
    for(int i=0;i<=limit;i++){
        printf("%d ",temp1);
        backup=temp2;
        temp2=temp1+temp2;
        temp1=backup;
    }
}