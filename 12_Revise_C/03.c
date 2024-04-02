#include<stdio.h>

void main (){
    int a, b, d ;
    int *j = &a;
    int *k = &b;

    printf("Enter any integer number for a :\n");
    scanf("%d", &a);

    printf("Enter any integer number for b :\n");
    scanf("%d", &b);

    printf("The address of the integer a is : %u \n",j);
    printf("The address of the integer b is : %u \n",k);

    /* d = (j - k)/4 ;

    printf(" The difference of integer sets between location of a and b : %d ",d);
  */

 d = j-k ;
 printf("The difference between address of a and b is of : %d bits",d);
    getchar();
}