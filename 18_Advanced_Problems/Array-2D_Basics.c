// Basics of 2D  Matrix 
#include<stdio.h>

void main (){
    int arr[3][3];
    //Concept of Rows * Cloumns is as important while dealing with the matrices 

    // Note that first all the rows will be inputted 
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter the value of element %d%d : \n",i+1,j+1);

            scanf("%d",&arr[i][j]);
        }
    }
    //Printing the array in matrix formation 

    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           printf("%d ",arr[i][j]);
           
        }
        printf("\n");
    }



    getchar();
}