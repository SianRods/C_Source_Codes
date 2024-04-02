// Sum Function Calling the fuunctoin by passing arguments through it 
#include<stdio.h>
#include<conio.h>


int sum (int a,int b); // Funtion declaration

void main(){
    int a =10 ;
    int b= 25 ;
    printf("This is the function to call  \nthe user defined fnt by using value :\n");

    printf("\nThe sum of the two digits is : %d",sum(a,b));

    getch();
}

int sum(int a , int b ){
    int c ;
    c=a+b ;
    b = 3456 ;
    a = 2345 ;
    return c ;
}
/*so in the above program when the sum function gets called 
by passing two integer type values through it , sum funtion returns the 
value of a + b and the a and b which are used are nothing but the 
variables declared under main function and the user defined 
sum funtion has no authority to change the varible values  */