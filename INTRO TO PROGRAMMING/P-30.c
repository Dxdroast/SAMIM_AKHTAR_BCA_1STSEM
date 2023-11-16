// WAP IN C TO CALCULATE THE AREA OF SQUARE CIRCLE AND RECTANGLE USING FUNCTIONS
#include<stdio.h>

float squarearea(float side);
float circlearea(float rad);
float rectanglearea(float length, float width);
int main(){
    float s,r,l,w;
    printf("ENTER THE VALUE OF SIDE : ");
    scanf("%f",&s);
    printf("ENTER THE VALUE OF RADIUS : ");
    scanf("%f",&r);
    printf("ENTER THE VALUE OF LENGTH : ");
    scanf("%f",&l);
    printf("ENTER THE VALUE OF WIDTH : ");
    scanf("%f",&w);
    printf("AREA OF SQUARE IS :%f\n ", squarearea(s));
    printf("AREA OF CIRCLE IS : %f\n", circlearea(r));
    printf("AREA OF RECATNGLE IS : %f\n ", rectanglearea(l,w));

}
float squarearea(float side){
    return side*side;
}
float circlearea(float rad){
    return 3.14*rad*rad;
}
float rectanglearea(float length, float width){
    return length*width;
}