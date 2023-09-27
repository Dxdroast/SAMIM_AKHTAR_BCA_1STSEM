#include<stdio.h>
int main(){
	int num;
	printf("ENTER THE NUMBER : ");
	scanf("%d", &num);
	if(num<=0){
		if(num==0){
			printf("NUMBER IS NEUTRAL");
		}
		else{
			printf("NUMBER IS NEGATIVE");
		}
	
	}
	else{
		printf("NUMBER IS POSITIVE");
	}
}
