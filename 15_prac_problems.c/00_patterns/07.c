#include<stdio.h>
// Printing Alphabets 
void main (){
    int rows ;
    printf("Enter the Number of rows : \n");
    scanf("%d",&rows);

    for (int i =1;i<=rows;i++){
        for (int j=1;j<=i;j++){
            printf("%c",64+j);
        }
        printf("\n");
    }
}