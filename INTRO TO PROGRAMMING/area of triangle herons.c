// WAP IN C TO CALCULATE THE AREA OF A TRIANGLE USING HERONS FORMULA
#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c,s,area;
	printf("ENTER THE LENGTHS OF FIRST SIDE :\n");
	scanf("%lf",&a);
	printf("ENTER THE LENGTHS OF SECOND SIDE :\n");
	scanf("%lf",&b);
	printf("ENTER THE LENGTHS OF THIRD  SIDE :\n");
	scanf("%lf",&c);
	//calculate the area of semi parameter
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("THE AREA OF TRIANGLE USING HERON'S FORMULA IS : %lf",area);
	return 0;
}
