#include<stdio.h>
             /*
             *
         *      *
    *       *       *
*       *       *       *

             
             */
void main (){
    int rows ;
    printf("Enter Number of Rows : \n");
    scanf("%d",&rows);

    for (int i=rows;i>=1;i--){
       
        for (int j=1;j<=i;j++){
            printf(" ");
            for (int k=1;k<=j;k++){
                printf("* ");
            }
        }
    printf("\n");

    }

    getchar();
}