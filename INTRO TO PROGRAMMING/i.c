/*WAP IN C TO CALCULATE THE AREA OF FOLLOWING
1)SQUARE
2)CIRCLE
3)RECTANGLE
4)TRIANGLE
5)TRAPEZIUM
*/

#include<stdio.h>
int main(){
    float side,radius,length,width,a,h,base1,base2;
    //CALCULATION AREA OF SQUARE
    printf("ENTER THE VALUE OF SIDE : ");
    scanf("%f", &side);
    printf("AREA OF SQUARE IS %f\n", side*side);
    // AREA OF CIRCLE
    printf("ENTER THE VALUE OF RADIUS : ");
    scanf("%f",&radius);
    printf("AREA OF CIRCLE IS : %f\n",3.14*radius*radius);
    //AREA OF RECTANGLE
    printf("ENTER THE VALUE OF LENGTH : ");
    scanf("%f", &length);
    printf("ENTER THE VALUE OF WIDTH : ");
    scanf("%f", &width);
    printf("AREA OF RECTANGLE IS %f\n", length*width);
    //AREA OF TRIANGLE
    printf("ENTER THE VALUE OF BASE : ");
    scanf("%f", &a);
     printf("ENTER THE VALUE OF HEIGHT : ");
    scanf("%f", &h);
    printf("AREA OF TRIANGLE IS : %f\n",.5*a*h);
    //AREA OF TRAPEZIUM
    printf("ENTER THE VALUE OF BASE 1 : ");
    scanf("%f",&base1);
    printf("ENTER THE VALUE OF BASE 2 : ");
    scanf("%f",&base2);
    printf("ENTER THE VALUE OF HEIGHT : ");
    scanf("%f",&h);
    printf("AREA OF TRAPEZIUM IS %f\n", .5*(base1+base2)*h);



}