#include<stdio.h>
// Inverted Star Pattern 
void main (){
    int rows ;
    printf("Enter the Number of rows : \n");
    scanf("%d",&rows);

    for (int i =1;i<=rows;i++){
        for (int j=rows;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }
}