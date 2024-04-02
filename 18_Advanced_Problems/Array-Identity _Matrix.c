// Converting a matrix into an Identity Matrix 
#include<stdio.h>

void main (){
    // Matrix Declaration 
    int arr1[3][3];
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the value of element %d%d : \n", i + 1, j + 1);

            scanf("%d", &arr1[i][j]);
        }
    }
    printf("The matrix which has been entered is : \n");
//  Printing the matrix 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    // converting the matrix into an identity matrix 

    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++) {
            if (i==j){
                arr1[i][j]=1 ;
            } else {
                arr1[i][j]=0;
            }
        }
    }
    //
    printf("The value of the matrix now is : \n");
    
      for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
}