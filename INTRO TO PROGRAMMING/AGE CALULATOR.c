//WRITE A PROGRAMME IN C TO DEMONSTRATE THE VOTING SYSTEM




#include<stdio.h>
int main(){
	int age;
	printf("ENTER THE AGE :");
	scanf("%d", &age);
	if(age>=18 ){
		if(age<=100){
		
		printf("YOU ARE ELIGIBLE TO CAST VOTE ");
	}
	else{
		printf("YOU ARE DEAD ");
	}
	}
	else if(age<=0){
	
		printf("NUMBER IS INVALID");
	}
	else{
		printf("YOU ARE NOT ELIGIBLE TO CAST VOTE ");
	}
	

	}
	
