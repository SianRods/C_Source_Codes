/*This topic is very important for the comcept of arrays and 
locating them using pointers 
1).we already know that teh elements of an array gets stored simul
2).Therefore we can easily locate them using pointer by using type 
    address incrementation */

#include<stdio.h>

void main() {
    int j  ;
    printf("Enter any number for the variable'J': \n");
    scanf("%d",&j);
    int *ptr = &j ;

    printf("The address of j is : %d \n",ptr);
    ptr = ptr +1 ;
    /* Note that as we now have incremented the integer type pointer variable ptr by 1 
    it denotes that ptr gets incremented by 1 unit of type which it holed 
    here ptr hold the type of being an integer so 1 unit of an integer on my machine 
    is of 4 bytes 
        */
    printf("The value of address nest to the element j is : %d\n",ptr);

    getch();
}