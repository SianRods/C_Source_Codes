#include<stdio.h>

void main (){
    char *ptr ="Sian Rodrigues";
    /*on using this command 
    the string is stored in an address where the 
    stating letter/ character of the strings address 
    is stored in the pointer ptr 
    */
  printf("%s\n",ptr);
  /*The benefit os using pointers during initialization of a string 
  is that it can be reinitialised again and again */
  ptr ="Sheela Rodrigues";
  printf("%s",ptr);
 getchar();
}