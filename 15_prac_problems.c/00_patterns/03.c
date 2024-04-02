#include<stdio.h>
 // Inverted Number Pattern 

void main (){
    int rows ;
    printf("Enter the Number of rows : \n");
    scanf("%d",&rows);
   
    for (int i =1;i<=rows;i++){
        for (int j=rows;j>=i;j--){
            printf("%d",j);
        }
        printf("\n");
    }








}