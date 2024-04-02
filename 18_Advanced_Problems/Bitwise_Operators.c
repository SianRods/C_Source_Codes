// Use of Bitwise opereator 
//  Simple Example to Demonstrate the difference between Logical and Bitwise Operator 
//  Bitwise operator perform ops where as the Logical Operator given True or false as out come 
#include<stdio.h>

void main (){
    int x=1,y=2;

    if (x&y){
        printf("x&y is does not evaluate zero \n");
    }else if (x&&y){
        printf("The Logic of x&&y is True if this statement is displayed \n");
    }




}