#include<stdio.h>


int main(){
int arr[3]={1,2,3};
int *brr=arr;
printf("printing the value using const array pointer \n");
printf("%p\n",(arr+0));
printf("%p\n",0+arr);
printf("%p\n",&arr[0]);
printf("%p\n",&0[arr]);	

printf("printing the value using another array pointer \n");
printf("%p\n",(brr+0));
printf("%p\n",0+brr);
printf("%p\n",&brr[0]);
printf("%p\n",&0[brr]);
}