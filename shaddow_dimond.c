#include<stdio.h>

int main(){
	int i,j,row;
	printf("Enter no of rows : ");
	scanf("%D",&row);
	for(i=0; i<row; i++){
		for(j=row-1; j>=i; j--){
			printf(" ");
		}
		for(j=0; j<=i; j++){
			printf("%d ",j+1);
		}
		
		printf("\n");
		
	}
	
	for(i=0; i<row; i++){
		for(j=0; j<=i; j++){
			printf(" ");
		}
		for(j=row-1; j>=i; j--){
			printf("%d ",(j+1));
		}
		
		printf("\n");
		
	}
}