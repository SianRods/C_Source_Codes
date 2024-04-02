// printing of 2d array
#include <stdio.h>

void print2d(int a[3][3], int *k)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("The value of Element %d%d is : %d\n", (i + 1), (j + 1), *(k));
        }
    }
}
// Inputing 2D ARRAY using using pointer incrementation

void int2d(int b[3][3], int *i)
{

    for (int l = 0; l < 3; l++)
    {
        for (int k = 0; k < 3; k++)
        {
            printf("Enter the value of %d%d elements : \n", (l + 1), (k + 1));
            scanf("%d", i);
            i++;
        }
    }
}

// Largest and minimum out of an array by comparing two consecutive elements of an array

int max(int arr[5])
{

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return arr[i];
        }
        else if (arr[i] < arr[i + 1])
        {
            return arr[i + 1];
        }
    }
}

int min(int arr[5])
{

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return arr[i + 1];
        }
        else if (arr[i] < arr[i + 1])
        {
            return arr[i];
        }
    }
}

void main()
{
    int arr[3][3];
    int *i = &arr[0][0];

    int2d(arr, i);
    print2d(arr, i);

    int arr2[5] = {32, 43, 54, 65, 789};
    printf("The maximum value of the array is: %d\n", max(arr2[5]));
    printf("The minimum value of the array is: %d\n", min(arr2[5]));
}