// Basics of C Part Two 
#include<stdio.h>

void main (){
    char name []="Sian Rodrigues ";
    char * ptr="Ryan Rodrigues ";

    printf("My Name is %s \n",name);
    puts(ptr); 
    ptr ="Dominic Rodrigues ";

    printf("The name of my father is now : %s \n",ptr);


}