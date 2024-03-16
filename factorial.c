#include<stdio.h>
int main(){
	int m;
	printf("Enter any val to find out fact : ");
	scanf("%d",&m);
	
	int i=0,fact=1;
	for(i=1; i<=m;i++){
		fact*=i;
	}
	
	printf("factorial = %d",fact);
}