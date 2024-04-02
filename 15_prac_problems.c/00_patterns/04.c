#include<stdio.h>
 // Straight  Number Pattern 

void main (){
    int rows ;
    printf("Enter the Number of rows : \n");
    scanf("%d",&rows);
   
    for (int i =1;i<=rows;i++){
        for (int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }


}