// WAP IN C TO CHECK THE ENTERED CHARACTER IS VOWEL OR CONSONANT
#include<stdio.h>
#include<ctype.h>
int main(){
    char n;
    printf("ENTER THE CHARACTER TO CHECK VOWEL OR NOT : ");
    scanf("%c",&n);
    if(n=='a'||n=='A'||n=='e'||n=='E'||n=='i'||n=='I'||n=='o'||n=='O'||n=='u'||n=='U'){
        printf("IT IS A VOWEL ! \n");

    }
    else if(isdigit(n)==1){
        printf("INVALID INPUT \n");
    }
    else{
        printf("IT IS A CONSONANT !\n");
    }
}