#include<stdio.h>
#include<string.h>
int main(){
	char a[5]= {'p','u','n','e','\0'};
	char b[5];
	printf("%s\n",&a);
	strcpy(b,a);
	printf("%s\n",&b);
	
	
}