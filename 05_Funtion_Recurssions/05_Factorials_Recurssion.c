#include<stdio.h>
#include<conio.h>

int factorial(int a); // function prototype declaration 

void main()
{      int a;
    printf("Enter the number for facotiral calculations :\n");
    scanf("%d",&a);

    printf("The Factorial of the above number is %d\n",factorial(a)); // funtion call 

    printf("Your Program has been successfully executed\n ");


}
 //---> function definiton using revurssion 

int factorial( int a) // Using recursion as it is one of the most direct way to write the algorithm
{
    if (a == 1 || a == 0)   // base funtion limit // also can be called as recurssion limit 
    {
        return 1 ;

    } else {
        return a * factorial(a-1);
    
    }


}