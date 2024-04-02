// Using Standard Library functions for strings 
#include<stdio.h>
#include<string.h>


void main (){
//  Creating a string Pointer 
    char *name ;
    printf("Name : \n");
    scanf("%s",name);

    char *name2;
    printf("Name Please ?? : \n");
    scanf("%s",name2);

    int val = strcmp(name,name2);
    printf(" Str Returned the value : %d",val);

    // Concatenating both the Strings 
    strcat(name,name2);
    printf("%s \n");

    //Using the String Length Commands 
    int l1 = strlen(name);
    int l2 = str(name2);
    printf("The length of the first string is %d and of the second one is %d",l1,l2);
}