/*
The conitnue command is used in a loop for a guven condition and whenever the condition command is satisfied all the 
other commands in that given loop are skiped and the depending upon the incrementation or decremntation the loop is runned
again 
*/
#include<stdio.h>
#include<conio.h>
void main (){

    int a , skip ;

    printf("Enter any number between 1-10");
    scanf("%d",skip);

    for(int i =0 ; i<=10 ; i++)
    {
        printf("%d" , i);

        if(i != skip){
            continue;
        }


    }


    getch();


}