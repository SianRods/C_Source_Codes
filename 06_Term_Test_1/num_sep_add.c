#include<stdio.h>
#include<conio.h>
void main (){
int num , digit , sum ;
printf("Enter any three digit number :\n");
scanf("%d",&num);

for (int i=0;i<=3;i++)
{
    digit = num%10; // Assignment Operator Works from Right to Left in the C program 
    
    num = num/10 ;

}



getch();
}