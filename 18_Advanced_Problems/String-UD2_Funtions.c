// Without Using Inbuilt Library Functions 
#include<stdio.h>

void scpy(char *target,char *source){
    int i=0;
    do{
        target[i]=source[i];
        i++;    
    } while(source[i]!='\0');
}

void main (){
    char name[]="Sian Rodrigues ";
    char str[50];
    // scpy(str,name);
    printf("The value of the first string is : %s \n",name);
    scpy(str,name);
    printf("Now the value of the second string is : %s \n",str);



}