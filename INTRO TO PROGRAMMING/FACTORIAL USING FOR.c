// WAP IN C TO CALCULATE THE FACTORIAL OF A NUMBER GIVEN BY USER USING FOR LOOP
#include<stdio.h>
int main(){
	int fact,product=1;
	printf("ENTER THE NUMBER WHOSE FACTORIAL IS TO BE CALCULATED : ");
	scanf("%d",&fact);
	for (int i=fact;i>=1;i--){
		product=product*i;
	}
	printf("THE FACTORIAL OF THE NUMBER IS  : %d\n", product);
}
