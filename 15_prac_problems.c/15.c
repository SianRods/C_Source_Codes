// Program to check a leap year 
#include<stdio.h>

void main (){
int yr;
printf("Enter any year : \n");
scanf("%d",&yr);

if (yr%4==0 || yr%400==0){
    printf("The year is a leap year \n");
    }else if (yr%100==0){
        printf("The year is not a leap year \n");
    }
}








