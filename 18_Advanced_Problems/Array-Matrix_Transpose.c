// Transpose of a Matrix 
#include<stdio.h>

void main (){
    int arr[3][2];
    int Transpose[2][3];
    // Input the Matrix 
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the value of element %d%d : \n", i + 1, j + 1);

            scanf("%d", &arr[i][j]);
        }
    }

printf("The matrix you have entered is : \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i=0;i<3;i++){
        for (int j=0;j<2;j++){
            Transpose[j][i]=arr[i][j];
        }
    }
    printf("The transpose of the given matrix is : \n");
    // Printing the transpose of the matrix 
     for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", Transpose[i][j]);
        }
        printf("\n");
    }    

}