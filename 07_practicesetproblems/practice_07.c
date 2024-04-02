//Program To print Table of N 
#include<stdio.h>
#include<conio.h>
void main (){
    int num ;
    printf("Enter the any Integer Number : \n");
    scanf("%d", &num );

    for (int i=1 ; i <=10 ; i ++){

        printf("%d\n",num*i);

    }


    printf("The Program Has been Executed Successfully ");
   getch();
}