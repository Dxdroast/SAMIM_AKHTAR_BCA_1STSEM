// WAP IN C TP CALCULATE THE AVERAGE OF FOUR SUBJECTS
#include<stdio.h>
int main(){
    float math,chemistry,physics,bio,average;
    printf("ENTER THE MARKS OF PHYSICS : ");
    scanf("%f", &physics);
     printf("ENTER THE MARKS OF MATHS : ");
    scanf("%f", &math);
 printf("ENTER THE MARKS OF CHEMISTRY : ");
    scanf("%f", &chemistry);
 printf("ENTER THE MARKS OF BIO : ");
    scanf("%f", &bio);
    average=(math+physics+chemistry+bio)/4;
    printf("THE AVERAGE OF FOUR SUBJECT IS %f \n", average);

}