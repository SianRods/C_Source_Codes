//Leap year program 
#include<stdio.h>

void main (){
    int year ;
    printf("Enter the Year to be checked : \n");
    scanf("%d",&year);
    // Should be divisible by 4 as well as 400 
    if (    year%4==0  && year%400==0){
        printf("The year is a leap year \n");
    } else if (year%100==0){
        printf("The year is not a leap year \n");
    }



    getchar();
}