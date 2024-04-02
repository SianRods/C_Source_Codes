// Multiplication of a 2D Matrix
#include <stdio.h>

void main()
{
    int arr1[3][3];
    int arr2[3][3];
    // Matrix A
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the value of element %d%d : \n", i + 1, j + 1);

            scanf("%d", &arr1[i][j]);
        }
    }
    // Printing the matrix A

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    // Matrix B
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the value of element %d%d : \n", i + 1, j + 1);

            scanf("%d", &arr2[i][j]);
        }
    }
    // Printing the Matrix B
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    int result[3][3];
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        //  Loop for the common term matrix
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                // Using Extern here so that the scope of the resultant matrix can become global
                // extern int result[3][3];

                sum += arr1[i][k] * arr2[k][i];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }

    // Printing the resultant Matrix C
    printf("Therfore by using row coloumn method the resultant matrix is : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    getchar();
}