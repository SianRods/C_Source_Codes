#include<stdio.h>

int fact(int a ){
if (a==0){
    return 1;
}else {
int result ;
result=fact(a-1)*a;
return result ;}
}
void main(){
    
    int num1 ;
    printf("Enter any number :");
    scanf("%d" ,&num1);

    printf("The factorial of the entered number is : %d",fact(num1));
}