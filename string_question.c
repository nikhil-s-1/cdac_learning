#include<stdio.h>
#include<string.h>

int main(){
	char inp[10];
	printf("Enter any string : ");
	gets(inp);
	char inp1[10];
	strcpy(inp1,inp);
	strrev(inp1);
	strcat(inp,inp1);
	
	printf("%s",inp);
}