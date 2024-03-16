#include<stdio.h>
int main(){
int no;

printf("Enter any no : ");
scanf("%d",&no);

for(int i=0;i<no; i++){
	for(int j=0; j<i; j++){
		printf("%d",no);
	}
	printf("\n");
}	
}