#include<stdio.h>
void add(int a , int b ){
    printf("The addition of two numbers is : %d",a+b);
}

void subtract(int a, int b){
    printf("The Subtraction between Two Numbers is :%d",a-b);

}

void multiply(int a , int b ){
printf("The Multiplication between both the numbers is :%d",a*b);
}

void div(int a , int b){
printf("The Division between both the numbers is :%f",a/b);

}
void main(){

    int store ;
    int num1 , num2 ;
   
   
    printf("Enter any two Integer Numbers to perform operations ");
    scanf("%d%d",&num1,&num2);
    printf("To Perform : \n Addition Press 1 \n Division Press 2\n Subtraction Press 3 \n Multiply Press 4 ");
    scanf("%d",&store);

    switch(store){
        case 1 : add(num1,num2);
        break;
        case 2 : div(num1,num2);
        break;
        case 3 : subtract(num1,num2);
        break;
        case 4 : multiply(num1,num2);
        break ; 

        default : printf("Please Enter a Valid Input !");
    }

    getch();
}