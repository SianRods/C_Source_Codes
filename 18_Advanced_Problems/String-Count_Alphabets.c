#include<stdio.h>
// Counting Number of Repitative words in an array 
int alphacnt(char *str,char alpha){
    int i=0;
    int j=0; //Seperate Variable which works as a counter for counting the letters  
    while(str[i]!='\0'){
        i++;
        if (alpha==str[i]){
            j++;
        }else {
            continue ; // If the alphabet is not present then continue running the loops 
        }
        
    }
    return j ;
}

void main (){
    char *name;
    printf("Enter your name : \n");
    gets(name);

    char n ;
    printf("Please Enter the character you want to count ");
    scanf("%c",&n);
    printf("You have selected %c \n",n);
    printf("The character %c repeats %d times in your name \n",n,alphacnt(name,n));




}