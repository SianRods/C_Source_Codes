// Printing an important pattern 
#include<stdio.h>

void main () {
 int rows ;
 printf("Enter the number of rows you want to print : \n");
 scanf("%d",&rows );

 for (int i=1;i<=rows;i++){
    for (int j=rows-i;j>=1;j--){
        printf(" ");
    }
    for ( int k=1;k<=i;k++){
        printf("%c",k+64)  ;// Note that ASCII values of alphabets starts from 64 
    }

    for (int l=i-1;l>=1;l--){
        printf("%c",64+l);
    }
        printf("\n"); // New line character for new iteration of the loop 

    }

}