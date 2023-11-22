// WAP IN C TO TAKE N NUMBER OF ARRAY SIZE FROM THE USER AND CAPTURE THE ELEMENTS FROM THE USER AND DISPLAY 
#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE VALUE OF N : ");
    scanf("%d", &n);
    int a[n];
    for (int i=0;i<n;i++){
    printf("ENTER THE ELEMENT OF AN INDEX : %d : ",i);
    scanf("%d", &a[i]);
    }
    for (int i=0;i<n;i++){
        printf("%d",a[i]);
    }

}