// EXAMPLE OF FUNCTION WHICH ACCEPTS VALUE AND RETURNS A VALUE
#include<stdio.h>
int add (int a, int b){
    int sum=a+b;
}
int main(){
    int a,b;
    printf("ENTER THE VALUE OF A : \n");
    scanf("%d", &a);
    printf("ENTER THE VALUE OF B : \n");
    scanf("%d", &b);
    int value= add(a,b);
    printf("%d", value);

}