/*
Syntax of an If else Statement where the else part is optional and based on the 
Logic of Stats being true or false 
----->>>

if (condition)
{
    print if condition is satisfied 
}

else {
    print if above condition is not satisfied 
}

*/

/* syntax of an IF else is statements 
If there are many condtions after if than those conditions can be adjusted by using else if syntax where number of 
ELSE IF depends on the conditions necessary also at the end if WE WANT ELSE CAN BE ADDED AT THE LAST 
----->>>>

if (Condition)
{
    Print anything if the condition is true --
}
else if {    PRITNT  }
else if {PRINT }
.....
else {print if nothing of the above is true}

*/

/*
Syatax of a Switch Statements Note that in switch systems just like mathematical logics input should be distinct value 
for the code to execute any condition 
The Logic Of Switch Can purely applied over here 

switch (expression)
{
    case value_1 : print if true
    break ;
    case value_2 : print if true 
    break;
    case value_3 : print if true 
    break ;

    default : will be executed in case any of the above condition is not executed 
    
    }

// C program to Demonstrate returning of day based numeric
// value
#include <stdio.h>

int main()
{
// switch variable
	int var = 1;

// switch statement
	switch (var) {
		case 1:
			printf("Case 1 is Matched.");
			break;

		case 2:
			printf("Case 2 is Matched.");
			break;

		case 3:
			printf("Case 3 is Matched.");
			break;

		default:
			printf("Default case is Matched.");
			break;
	}

	return 0;
}


 NOTE THAT IT IS VERY IMPORTANT TO BREAK THE COMMAND IF DOWN PART IS NOT TO BE EXECUTED 


 ALSO NOTE THAT THE NESTED SWITCH ARE ALLOWED MEANING WE CAN INSERT A SWITCH IN CASE 
 OF A CASE FOR ANOTHER SWITCH 
*/