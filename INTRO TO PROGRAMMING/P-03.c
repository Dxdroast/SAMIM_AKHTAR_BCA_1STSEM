// WAP IN C TO PRINT REVERSE STAR PATTERN
#include<stdio.h>
int main(){
    int rows;
    printf("ENTER THE ROWS : ");
    scanf("%d",&rows);
   for( int i=rows;i>=1;i--){
        for(int j=i;j>=1;j--){
        printf("*");
    }
    printf("\n");
}
}