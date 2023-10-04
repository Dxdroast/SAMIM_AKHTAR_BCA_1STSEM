#include<stdio.h>
int main(){
    float kb,mb,gb,tb;
    printf("ENTER THE SIZE IN KB :");
    scanf("%f", &kb);
    mb=kb/1024.0;
    gb=mb/1024.0;
    tb=gb/1024.0;
    printf("SIZE IN MB IS : %f\n", mb);
    printf("SIZE IN GB IS : %f\n", gb);
    printf("SIZE IN TB IS : %f\n", tb);
}
