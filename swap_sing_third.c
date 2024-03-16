#include<stdio.h>

int main(){
	int third ,first , sec;
	printf("Enter first no : ");
	scanf("%d",&first);
	printf("Enter second no : ");
	scanf("%d",&sec);
	
	printf("First variable contains : %d",first);
	printf("Second variable contains : %d", sec);
	third = first;
	first=sec;
	sec= third;
	
	printf("first variable contains : %d",first);
	printf("Second variable contains : %d", sec);	
	
}