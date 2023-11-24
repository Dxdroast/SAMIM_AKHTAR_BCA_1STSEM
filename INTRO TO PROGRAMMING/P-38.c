/* WAP IN C TO TAKE INPUT OF AGE AND CHARACTER STRING MULTIPLETIMES
 AND DISPLAY ALL THE INFORMATION USING STRUCTURE*/
#include<stdio.h>
int main(){
    struct user_data{
        char name[10];
        int age;


    };
    struct user_data a[5];
    for(int i=0;i<5;i++){
        printf("ENTER THE NAME OF PERSON : %d\n",i+1);
        gets(a[i].name);
        printf("ENTER THE AGE OF PERSON : %d\n",i+1);
        scanf("%d", &a[i].age);
        getchar();
    }
    for(int i=0;i<5;i++){
        printf("THE NAME OF PERSON : %s\n",a[i].name);
        printf("AGE  OF THE PERSON : %d\n",a[i].age);

    }

}