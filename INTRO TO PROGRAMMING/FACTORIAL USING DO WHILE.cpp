#include<stdio.h>
int main(){
	int start,n;
	printf("ENTER THE VALUE OF N :");
	scanf("%d", &n);
	do{
		printf("%d\n", &n);
		n=start+n;
	}
	while(start<=10);
}
