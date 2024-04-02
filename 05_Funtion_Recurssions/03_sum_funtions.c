#include<stdio.h>
#include<conio.h>

int sum (int x, int y); // Funtion Prototype Declaration --->

//----> The Program Execution starts and the function can be called inside it 
void main (){

    printf("Writing a program to give addition of two integer type variables by making a seperate funtion for it ");
    int c;
    c = sum (2,5);       // Funtion calling 
    // NO FUNCITON CAN BE DIRECTLY PRINTED BY CALLING IT INTO "PRINTF"
    printf("The value of the funtion declaration is %d",c);
    getch();
}

//------> Writing the Function Definiton 
 int sum (int x , int y ){
    int ops ;
    ops = x+y ;
    return ops ;

 }