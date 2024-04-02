#include<stdio.h>

int add(int a, int b){
    int result = a + b ;
    return result ;
}

float div(int a, int b){
    float result ;
    result =  (a/b) ;

    return result ;
}
void main (){
    int num1, num2 ;

    printf("Enter first numbers :");
    scanf("%d",&num1 );

    printf("Enter second  numbers :");
    scanf("%d",&num2 );

    printf("The addition of the two numbers is %d" , add(num1,num2));
    printf("The Division of the two numbers is %f" , div(num1,num2));





    
}