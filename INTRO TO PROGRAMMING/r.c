// WAP IN C TO FIND THE WEEKDAY BY TAKING THE WEEKDAY NUMBER BY USER
#include<stdio.h>
int main(){
    int day;
    printf("ENTER THE WEEKDAY NUMBER : ");
    scanf("%d", &day);
    switch(day){
        case 1:
        printf("TODAY IS SUNDAY\n");
        break;
        case 2:
        printf("TODAY IS MONDAY\n");
        break;
        case 3:
        printf("TODAY IS TUESDAY\n");
        break;
        case 4:
        printf("TODAY IS WEDNESDAY\n");
        break;
        case 5:
        printf("TODAY IS THURSDAY\n");
        break;
        case 6:
        printf("TODAY IS FRIDAY\n");
        break;
        case 7:
        printf("TODAY IS SATURDAY\n");
        break;
        default:
        printf("INVALID INPUT \n");
        break;
        
    }
    
    
    }