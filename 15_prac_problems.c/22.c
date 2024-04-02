// Gcd Using Control Structures 
#include<stdio.h>

void main(){
    int num1 , num2 ;
    printf("Enter Number 1 : \n");
    scanf("%d",&num1);
    printf("Enter Number 2 : \n");
    scanf("%d",&num2);
    int temp = num1*num2;
    // Here we have to repeat the Loop till a particular condition is met so using 
    // Exit Level DO-WHILE Loop 

    do {
            if (num1>num2){
                num1-=num2;
            }else if (num2>num1){
                num2-=num1;
            }

    } while (num1!=num2);

    printf("The G.C.D Of Both the numbers is : %d \n",num1);
    printf("The L.C.M of two numbers is : %d\n",temp/num1);

}