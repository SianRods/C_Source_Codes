// Write a Program for deletion of an element from the specified location from Array
// By using the concept of Dynamic Memory allocation
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *arr;
    int a;
    printf("Enter the size of array you want : \n");
    scanf("%d", &a);
    arr = (int *)malloc(a * sizeof(int));

    for (int i = 0; i < a; i++)
    {
        printf("Enter the value of element : %d \n", (i + 1));
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < a; i++)
    {
        printf(" The value of %d  element is : %d \n", (i + 1), arr[i]);
    }
    int ele, index;
    printf("Enter the element you want to delete : \n");
    scanf("%d", &ele);
    // Using Linear Search to find the element
    for (int j = 0; j < a; j++)
    {
        if (ele == arr[j])
        {
            index = j;
        }
    }

    for (int i = index ; i < a - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    for (int i = 0; i < a - 1; i++)
    {
        printf(" The value of %d  element is : %d \n", (i + 1), arr[i]);

    }
    free(arr);
}
