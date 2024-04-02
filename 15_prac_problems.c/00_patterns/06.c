#include<stdio.h>
// Printing Centre Pyramid Structure  
void main (){
    int rows ;
    printf("Enter the Number of rows : \n");
    scanf("%d",&rows);

    // Note that the first loop will be always be used for rows 
    for (int i=1;i<=rows;i++){
        for (int j=rows;j>i;j--){
            printf(" ");
            
        }
        for (int k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");

    }


}