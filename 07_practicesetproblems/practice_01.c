#include<stdio.h>
#include<conio.h>

void main (){
    int l,b,result  ;
    printf("Program to calculate Area of a Rectangle :");

    printf("Enter the length of a Rectangle :\n");
    scanf("%d",&l);
    printf("Enter the Breadth of a Rectangle : \n");
    scanf("%d",&b);

    printf("To Calculate the Area Press -->>1 \n To calculate the Perimeter press -->> 2\n");
    scanf("%d",&result);

    switch(result){

        case 1 : printf("The Area Of the Given Rectangle %d" , l*b);
        break ; 
        case 2 : printf("The Perimeter of the Reatangle is :");
        break;


    }



getch();

}