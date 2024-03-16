#include<stdio.h>

void swap(int*x, int*y){
	int temp;
	temp = *x;
	*x= *y;
	*y=temp;
}
int main(){
	int first, second;
	printf("Enter first no : ");
	scanf("%d",&first);
	printf("Enter second no : ");
	scanf("%d",&second);
	
	printf("value of \n first = %d \n second =%d\n",first , second);
	swap(&first,&second);
	printf("After swapping value of \n first = %d \n second =%d\n",first , second);
}