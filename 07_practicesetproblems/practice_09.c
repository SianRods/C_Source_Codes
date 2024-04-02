#include<stdio.h>
#include<conio.h>

void main (){
    printf("Program to print seum of first N natural Numbers : \n");
    int n , sum , i= 0  ;
    printf("Enter the nth Natural Numbers : ");
    scanf("%d",&n);

    do {
        sum = i; 
        n-- ;
    } while (i<=n);

    printf("The sum of first 'n' natural Numbers is %d", sum );

    getch();
}