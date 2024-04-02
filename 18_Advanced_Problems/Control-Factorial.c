//Factorial using simple if - else condition -
#include<stdio.h>

void main (){
    int num;
    printf("Enter the number for cal : \n");
    scanf("%d",&num);

    int fact =1 ;// Here the program ensures completion for 0 

    for (int i=num;i>=1;i--){
        fact *=i;
    }

printf("The factorial of the %d is : %d \n",num,fact);
    getchar();
}