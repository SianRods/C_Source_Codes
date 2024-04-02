#include<stdio.h>

void main (){
    char name[] = "Sian Rodrigues ";
    printf("%s",name);
    /*Drawback of using this method without using pointers is 
    that if after intializing the string at any point it is 
    reinitalised the compiler will throw an error just like call by value
    and call by reference */


    getchar();
}