// Swapping of two variables 
#include<stdio.h>

void main (){
    int a ,b;
    printf("Enter two numbers : \n");
    scanf("%d%d",&a,&b);

    a = a+b;
    b =a-b;
    a=a-b;
    printf("The value of a is %d \n",a);
    printf("The value of b is %d \n",b);

    getchar();
}