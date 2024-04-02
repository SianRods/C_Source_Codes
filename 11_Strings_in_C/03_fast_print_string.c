#include<stdio.h>

void main (){
    char *ptr= "sian";
    printf("Your name is %s",ptr);
    
    getchar();
}
/*Here we de not deref the pointer cause we directly use 
 %s and it can be printed without any problems we should keep in 
 mind that there are limitatons involved while using this method 
 */