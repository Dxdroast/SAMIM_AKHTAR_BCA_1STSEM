#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	printf("ENTER THE FIRST SIDE : ");
	scanf("%f", &a);
	printf("ENTER THE SECOND SIDE : ");
	scanf("%f", &b);
	printf("ENTER THE THIRD SIDE : ");
	scanf("%f", &c);
if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a)) 
	{ 
		printf("IT IS A RIGHTANGLE TRIANGLE");
		
	}
	else{
		printf("IT IS NOT A RIGHTANGLE TRAINGLE");
		
	}
}
