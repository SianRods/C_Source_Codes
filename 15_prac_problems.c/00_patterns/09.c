//  Printing Different Alphabets on different Lines 
#include<stdio.h>

void main (){
    int rows ;
    printf("Enter the Number of rows : \n");
    scanf("%d",&rows);

    for (int i=1;i<=rows;i++){
        for (int j=1;j<=i;j++){
            printf("%c",64+i);
        }
        printf("\n");
    }


}