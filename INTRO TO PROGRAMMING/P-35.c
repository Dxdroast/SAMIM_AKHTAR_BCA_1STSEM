#include<stdio.h>
int main (){
    float price [3];
    printf("ENTER THE PRICES : ");
    scanf("%f", &price[0]);
     scanf("%f", &price[1]);
      scanf("%f", &price[2]);
      printf("PRICE AFTER GST : %f \n ",price[0] + ( 0.18*price[0]));
      printf("PRICE AFTER GST : %f \n ",price[0] + ( 0.18*price[1]));
      printf("PRICE AFTER GST : %f \n ",price[0] + ( 0.18*price[2]));

}