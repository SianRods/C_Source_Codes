#include<stdio.h>

/*in this program we will be using the gets and puts 
functions for printing as well as inputing a given string 
note that this functions are capable of storing multi words strings 
*/
void main (){
        char fullname [20];
        printf("Enter your full name : ");
    gets(fullname);
    puts(fullname);

 getchar();
}