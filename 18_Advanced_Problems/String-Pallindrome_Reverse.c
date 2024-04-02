// Pallindrome string 
// Reversal of the character array
#include<stdio.h>
#include<string.h>

// program can be created by using the logic of string compare and string reverse


void main (){
    char name[20];
    printf("Enter the value for the string : \n");
    gets(name); // Can be used to take the multiline input 
    char temp[20];
    strcpy(temp,name); // strcpy(target string, source string );
    char var;
    
    // reverse the given string s
    for (int i=0;i<strlen(name)/2;i++){
        var = name[i];
        name[i]=name[strlen(name)-i-1];
        name[strlen(name)-i-1]=var ;
    }

    printf("The value of the string now becomes : %s \n",name);

    // Using String Compare function to compare the values of two strings 
    int n =strcmp(name,temp);
    if (n==0){
        printf("The string is  palindrome \n");

    } else {
        printf("The string is not palindrome \n");
    }

}