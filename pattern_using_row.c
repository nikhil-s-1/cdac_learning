#include<stdio.h>

int main(){
	int i,j,no;
	printf("Enter no of rows : ");
	scanf("%d",&no);
	for(i=0; i<no; i++){
		for(j=0;j<=i; j++){
			if(i%2==0){
				if(j%2==0){
					printf("1");
				}else{
					printf("0");
				}
			}else{
				if(j%2==0){
					printf("0");
				}else{
					printf("1");
				}
			}
		}
		printf("\n");
	}
}