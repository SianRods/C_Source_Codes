#include<stdio.h>
#include<conio.h>

void main(){

int rows ;
printf("Program to Print a Pyramid ");

printf("Enter the number of Rows you want to Print :");
scanf("%d",&rows);

for (int  i = 0; i <= rows ; i++)
{
    for (int j = 0; j<=(rows-i); j++)
    {
        printf(" ");        
    }
    printf("*\n");
}


getch();

}