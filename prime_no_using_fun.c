#include<stdio.h>

int prime(int no ){
	int i;
	for(i=2; i<=no/2; i++){
		if(no%i==0){
			return 0;
		}
	}
	return 1;	
}
int main(){
	int no ;
	printf("Enter any no to check prime : ");
	scanf("%D",&no);
	prime(no)?printf("no is prime "):printf("no is not a prime ");
}