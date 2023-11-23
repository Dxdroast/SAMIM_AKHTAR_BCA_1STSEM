#include<stdio.h>
int main(){


int ar[10]={10.20,30,40,50,60,70,80,90,100};
int element =40 ;
for(int i =0;i<10;i++){
    if(ar[i]==element){
        printf("ELEMENT FOUND IN INDEX : %d",i);
        break;
    }
}


}