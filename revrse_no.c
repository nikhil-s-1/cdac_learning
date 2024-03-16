#include<stdio.h>
int main(){

    int num,unit_digit,rev ;
    printf("Enter any no to reverse : ");
    scanf("%d",&num);

    for(int i=num; i>0; i/=10){
        unit_digit = i%10;
        rev =rev*10 +unit_digit;
    }
    printf("%d",rev);
}