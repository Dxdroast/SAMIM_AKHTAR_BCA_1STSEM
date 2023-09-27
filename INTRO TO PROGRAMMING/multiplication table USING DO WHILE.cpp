#include<stdio.h>
int main(){
	int n,start=1;
	printf("ENTER THE VALUE OF N :");
	scanf("%d", &n);
	do{
		printf("%d*%d=%d\n",n,start,n*start);
		start++;
	}
	while(start<=10);
}
