#include<stdio.h>
#include<conio.h>

void main (){
    float p ,n , r ;
    printf("Program to Calculate Simple Interest :");

    printf("Enter the principal Amount :\n");
    scanf("%f", &p);

    printf("Enter the Number of Years :\n");
    scanf("%f",&n);

    printf("Enter the Rate of Interest :\n");
    scanf("%f",&r);

    float interest = (p*n*r)/100 ;

    printf("The Simple Interest as Calculated is %f", interest );
    







    getch();
}