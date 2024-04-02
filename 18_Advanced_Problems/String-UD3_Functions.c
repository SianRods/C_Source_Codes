// Function to determine the string length
#include<stdio.h>

int strl(char *str){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i ;
}

void main (){
    char *name;
    printf("Enter your name : \n");
    gets(name);
    strl(name);
    printf("The Length of your name including the spaces is : %d \n",strl(name));
}