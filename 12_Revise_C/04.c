// Call by value for given function 
#include<stdio.h>

int sum(int a,int b){
    int c ;
    c = a+b ;          // Function Prototype and Function Declaration 
    return c;
}


void main (){
    int num1 , num2 ;
    printf("Enter any integer number for num1 :\n");
    scanf("%d", &num1);

    printf("Enter any integer number for num2 :\n");
    scanf("%d", &num2);

// using call by value for given function 

printf("The addition of two numbers is : %d \n", sum(num1,num2));

 getchar();
}