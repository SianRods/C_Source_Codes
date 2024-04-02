// Syntax of for Loop which is an entry level loop in c
// C program to illustrate for loop


#include <stdio.h>

// Driver code
int main()
{
int i = 0;

for (i = 1; i <= 10; i++)
{
	printf( "Hello World\n");
}
return 0;
}

// for ( loop counter initialization ; condition ; counter updatation)

// Syntax for a while Loop which is also an entry level Loop
/*

Loop_Counter_Intilisation ;
 
     while ( text_expression)
     {
        TO PRINT 

        incrementation_perLoop ;
     }
     
     
*/

// C program to illustrate
// while loop
#include <stdio.h>

// Driver code
int main()
{
// Initialization expression
int i = 2;

// Test expression
while(i < 10)
{
	// loop body
	printf( "Hello World\n");
	
	// update expression
	i++;
}

return 0;
}


/*

Syntax for a "Do-While Loop" Which is Exit Level Controlled Looping Sytem 

*/

/*

 initialization of the counter ;

do  
{
   print atleast once irrespective of the truth value 
   counter incrementation/decrementation ;

} while(testexpression/ condition)

*/

// C program to illustrate
// do-while loop
#include <stdio.h>

// Driver code
int main()
{
// Initialization expression
int i = 2;

do
{
	// loop body
	printf( "Hello World\n");

	// Update expression
	i++;
	
	// Test expression
} while (i < 1);// Ending the Do-While loop by using semicolon is very important 

return 0;
}
   