// WAP IN C TO CONVERT CELSIUS INTO FARENHEIT USING FUNCTIONS

#include<stdio.h>
float converttemp(float celsius);
int main(){
    float c;
    printf("ENTER THE TEMPERATURE IN CELSIUS : ");
    scanf("%f", &c);
    printf("THE TEMPERATURE IN FARENHEIT IS: %f ", converttemp(c));
    return 0;
}
float converttemp(float celsius){
    float far= celsius * (9/5)+32;
    return far;
}