#include <stdio.h>
// average of all elements of an array 
void inpt(int arr[10])
{
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of element no %d : \n", (i + 1));
        scanf("%d", &arr[i]);
    }
}

void printarr(int arr[10] )
{

    for (int k = 0; k < 10; k++)
    {
        printf("The value of Element No %d is : %d \n", (k + 1), arr[k]);
    }
}

int arravg(int*k){
    int smmtn=0;
    for  (int i=1;i<=10;i++){
        smmtn += *(k);
        k++;
    }
    float avg ;
    avg = (smmtn/10);
    return avg ;
    }


void main()
{
    int arr[10];
    inpt(arr);
    printarr(arr);
    int *j=&arr[0];
    float avg =arravg(j);
    printf("The avarage of all the elements in the array is : %f \n",avg);
}


