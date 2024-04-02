#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b ;
    printf("Enter any day of the week :");
    scanf("%d",&a);

    b = a ;

    switch(b){
        case 1 : printf("The day is Monday");
        break;
        case 2 : printf("The Day is Tuesday");
        break;
        case 3 : printf("The day is wednesday ");
        break;
        case 4 : printf("The day is Thursday");
        break;
        case 5 : printf("The Day is Friday");
        break;
        case 6 : printf("The day is Saturday");
        break;
        default: printf("The data entered is invalid please try again ");
    }
    getch();
}