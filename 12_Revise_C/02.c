#include<stdio.h>

void main (){
    int a,b,c ;
    int *j = &a ;


    printf("Enter any integer number for a :\n");
    scanf("%d", &a);

    printf("Enter any integer number for b :\n");
    scanf("%d", &b);

    printf("Enter any integer number for c :\n");
    scanf("%d", &c);

    printf("The address of the integer a is : %u \n",j);
    printf("The value of integer a  is % d \n", *j);
    j++ ;
    printf("The address after a is by incrementing pointers is :%d",j);

    getchar();
}