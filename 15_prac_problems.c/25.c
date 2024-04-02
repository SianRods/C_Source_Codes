// Inverted  Half Pyrmaid Pattern of numbers or star pattern 
#include<stdio.h>

void main (){
    int rows ;
    printf("Enter the Number of Rows : \n");
    scanf("%d",&rows );

    for (int i=rows;i>=1;i--){
        for (int k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }


}