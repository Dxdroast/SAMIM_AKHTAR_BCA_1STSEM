// WAP IN C TO DETERMINE THE DATATYPE OF ANY KEYBOARD INPUT
#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    printf("ENTER THE CHARACTER : ");
    scanf("%c",&ch);
    if(isalpha(ch)==1){
        printf("IT IS A CHARACTER\n");
    }
    else if(isdigit(ch)==0){
        printf("IT IS A DIGIT \n");
    }
    else{
        printf("INVALID INPUT");
    }
}
