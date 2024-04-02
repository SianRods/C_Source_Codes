// Program TO Check Whether the Year Entered is Leap Or Not 
#include<conio.h>
#include<stdio.h>

void main (){
     int yr ;
     printf("Enter the Year Which you Want to check :");
     scanf("%d", &yr);

     if ( yr% 4 == 0 || yr%100== 0 ){

        if (yr%400 == 0){
            printf("The Year is Not a Leap Year :");
        }
        else if (yr % 400 != 0){
            printf("The Year is a leap Year ");
        }
    }

    getch();
}