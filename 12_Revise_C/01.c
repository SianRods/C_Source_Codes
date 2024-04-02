// Code for Using Pointers Interger and Float 
#include<stdio.h>

void main (){
    int a,b,c ;
    printf("Enter any Integer for a :\n");
    scanf("%d",&a);

    printf("Enter any Integer for b :\n");
    scanf("%d",&b);

    int *j = &a ;
    int *k = &b ;

    printf("The address of integer a is : %u  \n",j  );
    printf("The address of the ineteger a is : %d\n",&a);
    printf("The value of integer a  is % d \n", *j);
    printf("The address of integer b is : %u  \n",k  );
    printf("The address of the ineteger b is : %d\n",&b);
    printf("The value of integer b  is % d \n", *k);

    getchar();
}
