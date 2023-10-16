// WAP IN C TO PRINT ASTERISK BARFI PATTERN OF STAR
#include<stdio.h>
int main(){
    int rows,i,j,k;
    printf("ENTER THE ROWS : ");
    scanf("%d", &rows);
    for( i=1;i<=rows;i++){
        for( j=i;j<=rows;j++)
        {
            printf(" ");

        }
        for( k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
}