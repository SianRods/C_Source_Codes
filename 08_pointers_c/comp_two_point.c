#include<stdio.h>

void main(){

    // Program to Compare two inetger type Pointers 
    int num1 , num2  ;
    printf("Enter any two integer number : \n");
    scanf("%d%d",&num1,&num2);

    int *ptr1 = &num1 ; 
    int *ptr2 = &num2 ;

    if (ptr1 > ptr2 ){
    printf("The number : %d has been alloted upper memory address which is : %u\n",num1,ptr1);
    printf("The Number of bytes available between num1 and num2 stored memory are %d\n",ptr1-ptr2);

    }
    else if (ptr2>ptr1){

    printf("The number : %d has been alloted upper memory address which is : %u\n",num2,ptr2);
    printf("The Number of bytes available between num1 and num2 stored memory are %d\n",ptr2-ptr1);

    }
    
    printf("Address of Num1 : %u\n",ptr1);
    printf("Address of Num2 : %u\n",ptr2);


    getch();
}