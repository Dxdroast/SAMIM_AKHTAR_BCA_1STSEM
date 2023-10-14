// NESTED LOOP EXAMPLE
#include<stdio.h>
int main(){
    int start,stop;
    printf("ENTER THE START VALUE : ");
    scanf("%d", start);
     printf("ENTER THE STOP VALUE : ");
    scanf("%d", stop);
    for(int i=start;i<=stop;i++){
        for(int j=1;j<=10;j++ ){
            printf("%d*%d=%d",i,j,i*j);
        }
    }

}