// calculator program for two numbers 
#include<stdio.h>

void main (){
    int num1,num2  ;
     printf("Enter Number 1 : \n");
     scanf("%d",&num1);
     printf("Enter Number 2 : \n");
     scanf("%d",&num2);

    char sel;
    printf("Enter + for additon\n - for subtraction \n * for multiplication \n / for division \n");
    scanf("%c",&sel);

    // Here it is very important to note that the switch statements can evaluate 
    //character values as well 

    switch (sel)
    {
    case '+':printf("The Addition of two number is %d",num1+num2);
        break;
    case '-': printf("The Subtraction of two numbers is %d", num1-num2);
        break ;
    case '*':printf("The Multiplication of two numbers is %d",num1*num2);
        break;
    case '/':printf("The Division of two numbers is %f",num1/num2 );
    
    default:
        break;
    }


}