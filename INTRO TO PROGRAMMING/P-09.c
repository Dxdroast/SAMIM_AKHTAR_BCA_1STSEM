
//WAP IN C TO FIND THE PRODUCT OF TWO NUMBER USING FUNCTION
#include<stdio.h>
int product(int a,int b){
    int product=a*b;
    return product;
}
int main(){
    int a,b;
    printf("ENTER THE VALUE OF A : ");
    scanf("%d", &a);
    printf("ENTER THE VALUE OF B : ");
    scanf("%d", &b);
    int val=product(a,b);
    printf("%d", val);

}