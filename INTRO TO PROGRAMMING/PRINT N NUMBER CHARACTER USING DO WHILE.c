// WAP IN C TO PRINT A CHARACTER N NUMBER OF TIME GIVEN BY THE USER USING DO WHILE
#include<stdio.h>
int main(){
	char ch;
	int n,start;
	printf("ENTER THE CHARACTER :\n");
	scanf("%c",&ch);
	printf("ENTER THE VALUE OF N :\n");
	scanf("%d",&n);
	do{
		printf("CHARACTER IS %c\n",ch);
		start++;
	}
	while(start<=n);
}
