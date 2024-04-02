#include<stdio.h>
// Write a C program to find the length of the string using Pointer.

int strlength(char * arr){
int i=0;
while(arr[i]!='\0'){
    i++;
    }
    return i;
}

void main (){
    char *name;
    printf("Enter your name : \n");
    scanf("%s",name);

    printf("The number of letter in your name are : %d\n",strlength(name));

}