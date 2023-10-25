// WAP IN C TO SWAP TWO NUMBERS USING FUNCTIONS
#include<stdio.h>
int swap(int a,int b){
  a = a + b;
    b = a-b;
   a = a - b;
  
}
int main(){
    int a,b,c;
     printf("ENTER THE VALUE OF A : ");
    scanf("%d", &a);
    printf("ENTER THE VALUE OF B : ");
    scanf("%d", &b);
    int val= swap(a,b);
    printf("A=%d, B=%d", a,b);
    

}