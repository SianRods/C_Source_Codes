#include<stdio.h>

int fact(int a){
    int fct;
    if (a==0){
        return 1;
    }
    else {
        return fact(a-1)*a;
    }
}

void main (){
    int num1,res ;
    printf("Enter any integer number : \n");
    scanf("%d",&num1);
    res= fact(num1);
    printf("The factorial of the given number is : %d \n",res);

    getchar();
}