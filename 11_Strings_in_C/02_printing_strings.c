#include<stdio.h>

void main(){
    char name[]= "sian";
    char *ptr= &name[0];

    while(*ptr!='\0'){

        printf("%c",*ptr);
        ptr++;

    }








    getchar();
}