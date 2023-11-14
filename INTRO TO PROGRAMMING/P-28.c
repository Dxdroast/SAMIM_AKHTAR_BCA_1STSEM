#include<stdio.h>
void calculateprice(float value);
int main(){
float n;
printf("ENTER THE PRICE : ");
scanf("%f",&n);
 calculateprice(n);
}
void calculateprice(float value){
    value=value+(0.18*value);
    printf("FINAL PRICE AFTER GST IS : %f",value);
}