#include<stdio.h>
#include<string.h>

//#include<conio.h>
void main () {
    char name[20];
    printf("Enter your name : ");
    gets(name);
    puts(name); 
    int k ;
   k= strlen(name);
   printf("The length of the given string is : %d",k);






    getchar();
}