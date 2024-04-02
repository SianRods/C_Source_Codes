#include<stdio.h>
#include<conio.h>

void main (){
    int i = 10 ;
    int *j = &i ;

    // Note that the value stored in i = 10 
    // also j stores the value of an integer type variable i 
    //Now lets take a look at different ways in which we can call for the address of i and j 
    // Using --->>> u% 

    printf("The value of i is %d\n", i );
    printf("The address of i is %d\n",j);
    printf("The address of i is also %u\n",&i);
    printf("The address of j is %u\n",&j);
    printf("The value stored at i can also be shown as : %d\n",*(&i));
    //note above are some ways in which we can store the address as well as the values
    getch();
}