#include <stdio.h>

// Printing Lower Triangular Matrix
/* Using three loops one for row ;
 another one for printing * and next for new line character 


*/
void main()
{
    int rows;
    printf("Enter the Number of rows : \n");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}