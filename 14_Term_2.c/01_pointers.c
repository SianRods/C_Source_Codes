#include<stdio.h>

void main(){
    int a, b ;
    printf("Enter any two integers : ");
    scanf("%d%d",&a,&b);

    int *ptr = &a;

    printf("The address of the int a is  %d",ptr);
    printf("The value of integer a is : %d",*ptr );
    //De refrencing the integer type pointer variable 
    ptr = ptr +1 ; 
printf("Now the address of a becomes %d",ptr );

}