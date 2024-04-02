#include<stdio.h>
#include<conio.h>

void main (){
    int income_an ;

    printf("Program to Calculate the income tax on total Annual Income :");

    printf("Enter the total Exact Annual Income :");
    scanf("%d", &income_an);

    if( income_an > 1000000){
        printf("The Income Tax Appilicable is %f", income_an*(30/100));
    }
    else if(500000 < income_an < 1000000){
        printf("The Applicable Income Tax is %f ", income_an*(20/100));

    }
    else if(income_an < 500000){
        printf("The Applicable income Tax is : %f", income_an*(5/100));
    }
       getch();
}