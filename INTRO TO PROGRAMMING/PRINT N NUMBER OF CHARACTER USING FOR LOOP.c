// WAP IN C TO PRINT A CHARACTER FOR N NUMBER OF TIME GIVEN BY THE USER USING FOR LOOP
#include<stdio.h>
int main(){
	char ch;
	int i,n,start;
	printf("ENTER THE CHARACTER :\n");
	scanf("%c",&ch);
	printf("ENTER THE VALUE OF N :\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		printf("MY CHARACTER IS : %c \n",ch);
	}
}
