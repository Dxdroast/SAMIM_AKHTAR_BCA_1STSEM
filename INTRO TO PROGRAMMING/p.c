#include<stdio.h>
int main(){
    double rupee;
    printf("ENTER THE AMOUNT IN RUPEES : ");
    scanf("%lf",&rupee);
    printf("AMOUNT IN DOLLARS : %lf\n", rupee*0.0121);
    printf("AMOUNT IN YEN : %lf\n", rupee*1.7719);
    printf("AMOUNT IN ROUBLE : %lf\n", rupee*1.15);
    printf("AMOUNT IN EUROS: %lf\n", rupee*0.0112);

}