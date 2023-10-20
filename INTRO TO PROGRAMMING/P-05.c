// WAP IN C TO PRINT FIBONACCI SERIES STAR PATTERN
#include<stdio.h>
int main(){
    int limit,temp1=1,temp2=1,backup;
    printf("ENTER THE LIMIT : ");
    scanf("%d",&limit);
    for(int i=0;i<=limit;i++){
      for(int j=0;j<temp1;j++){
        printf("*");
      }
      printf("\n");
        backup=temp2;
        temp2=temp1+temp2;
        temp1=backup;
    }
}