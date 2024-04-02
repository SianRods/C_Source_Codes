// Calculator program on symbols or characters 
#include<stdio.h>

void main (){
    char sel ;
    int a,b;

    printf("Enter the first number : \n");
    scanf("%d",&a);
    printf("Enter the second number : \n");
    scanf("%d",&b);

    printf("Press '+' for addition of two numbers \n");
    printf("Press '-' for subtaction of two numbers \n");
    printf("Press '*' for Multiplication of two numbers \n");
    printf("Press '/' for division of two numbers \n");
    scanf("%c",&sel);

    switch(sel){
        case '+' : printf("%d \n",a+b);
        break;
        case '-' : printf("%d \n",a-b);
        break;
        case '*' : printf("%d",a*b);
        break ;
        case '/' : printf("%f",a/b);
        break ;
        default : printf("Invalid Input !! ");

    }
}