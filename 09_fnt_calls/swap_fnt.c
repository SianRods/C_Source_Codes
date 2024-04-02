#include<stdio.h>

void  swap_c(int *a , int *b );
//declared that a and b are pointer integer variables ;



void main(){

int num1 , num2 ;

printf("Enter any two integer type numbers : \n");
scanf("%d%d",&num1,&num2);

printf("The value of num1 :%d and of num2:%d before swapping \n",num1,num2);
swap_c(&num1,&num2);
printf("The value of num1 :%d and of num2:%d after swapping \n",num1,num2);

    getch();
}

void swap_c (int *a, int*b){
    int temp ;

    temp=*a;
    *a=*b;
    *b=temp;
    
}
/*Note that in this porgram a and b are integer type pointer 
variables however (*a) represents the value which is stored at address of a and b
respectively */