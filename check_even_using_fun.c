#include<stdio.h>
int even(int);
int main(){
    int no;
    printf("Enter any no : ");
    scanf("%d",&no);
    even(no)?printf("Given no is even \n"):printf("Given no is Odd\n");
}

int even(int no){
    return (no%2==0?1:0);
}