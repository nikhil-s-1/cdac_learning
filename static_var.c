#include<stdio.h>
void increament();

int main(){
static int a=0;	//because its scope is inside this function but life tiime is through out program.
	increament();
	printf("%d",a);
}

void increament(){
	a++;
	
}