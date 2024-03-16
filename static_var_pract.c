#include<stdio.h>
 increament();
static int a=0;
int main(){
	//because its scope is inside this function but life tiime is through out program.
	increament();
	printf("%d",a);
	return 0;
}

 increament(){
	
	a++;
	
}