// WAP IN C TO PRINT STAR PATTERN
#include<stdio.h>
int main(){
    int rows,i,j;
    printf("ENTER THE ROWS : ");
    scanf("%d", &rows);
    for( i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
   
}