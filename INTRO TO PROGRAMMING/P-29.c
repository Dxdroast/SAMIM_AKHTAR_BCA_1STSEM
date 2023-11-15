// WAP IN C TO CALCULATE THE SQUARE OF GIVEN NUMBER USING FUNCTION
#include<stdio.h>
#include<math.h>
int squareofnumber(int number);
int main(){
    int n;
    printf("ENTER THE NUMBER TO CALCULATE THE SQAURE : ");
    scanf("%d", &n);
    squareofnumber(n);

}
int squareofnumber(int number){
    int square;
    square= pow(number,2);
    printf("SQUARE OF GIVEN NUMBER IS : %d",square);
}