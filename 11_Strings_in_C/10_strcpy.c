#include<stdio.h>
#include<string.h>

void main(){
    char str1[]="Sam Altman was fired by the board pf open AI ";
    char str2[40];
    strcpy(str2,str1);

    /* Note that general syntax of this 
    strcpy(Target String , Source String ); */

    printf("Now the value of the second string is : ");
    puts(str2);


    getchar();
}