#include <stdio.h>
// Matrix Multiplication use row coloumn method 

void main()
{
    int mata[3][3];
    int matb[3][2];

    printf("Please enter the First Matrix : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int l = 0; l < 3; l++)
        {
            printf("Enter the value of elements :  %d %d \t", (i + 1), (l + 1));
            scanf("%d", &mata[i][l]);
        }
        printf("\n");
    }
    printf("Please enter the second Matrix : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int l = 0; l < 2; l++)
        {
            printf("Enter the value of elements :  %d %d \t", (i + 1), (l + 1));
            scanf("%d", &matb[i][l]);
        }
        printf("\n");
    }
    int sum = 0;
    int result[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int k = 0; k < 2; k++)
        {
            for (int j = 0; j < 3; j++)
            {
                // calculation of the resultant matrix
                sum = mata[i][j] * matb[j][i] + sum;
            }
            result[i][k] = sum;
            sum = 0;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d \t", result[i][j]);
        }
        printf("\n");
    }

    getchar();
}