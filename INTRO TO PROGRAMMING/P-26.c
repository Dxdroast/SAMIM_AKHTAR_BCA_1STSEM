// EXAMPLE OF CALL BY REFERNECE
#include<stdio.h>

    int add (int*a,int *b){
        int sum = *a+*b;
        return sum;
    }
    int main(){
    int a=10;
    int b=20;
    printf("%d", add(&a,&b));
}
