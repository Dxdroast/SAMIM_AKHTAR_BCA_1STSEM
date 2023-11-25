//WAP IN C TO USE 
#include<stdio.h>
int main(){
    struct user_data {
        char name[20];
        char email[30];
        int age;
    };
    union {
        long int aadhar_id;
        long int voter_id;
    };
}
