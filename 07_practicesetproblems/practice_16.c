#include<stdio.h>
#include<conio.h>

void main(){
    int rows ;
    printf("Enter the Number of Row you want to print :\n");
    scanf("%d",&rows);

    for (int i = 1 ; i<=rows ; i++){

        for(int j=1 ; j<=i;j++){
            printf("*");
        }
    }
    printf("\n");
    getch();
}