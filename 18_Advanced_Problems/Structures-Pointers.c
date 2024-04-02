// Pointers in a structures 
#include<stdio.h>
struct employee
{
    char *name;
    int sal;
    int yrs;
    char *design;
    
};
void main (){
    struct employee e1;
    struct employee *ptr;
    ptr = &e1 ;
  
    e1.name="Sian";
    //  Printing the value stored at ptr by derefrencing it 
    printf("%s \n",ptr->name);
}