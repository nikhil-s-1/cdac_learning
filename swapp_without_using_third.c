#include<stdio.h>

int main(){
	int first, second;
	printf("Enter first no : ");
	scanf("%d",&first);
	printf("Enter second no : ");
	scanf("%d",&second);
	
	printf("value of \n first = %d \n second =%d\n",first , second);
	first = first+second;
	second  = first -second;
	first = first -second;
	printf("After swapping value of \n first = %d \n second =%d\n",first , second);
}