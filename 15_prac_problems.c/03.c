/*Printing the pattern 
02.c Right handed one 
*/

#include<stdio.h>

void main (){
    int rows ;
    printf("Enter the number of rows : \n");
    scanf("%d",&rows);

    for (int i=1;i<=rows;i++){

        for (int j=rows;j>=i;j--){
            printf(" ");

        }
        for (int k=1;k<=i;k++){
        printf("*");}
        
     printf("\n");

    }





    getchar();
}