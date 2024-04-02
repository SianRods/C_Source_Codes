// to print prime numbers using functions between intervals
#include <stdio.h>

void prime(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            if (i == 2)
            {
                printf("The Number is Prime : %d \n", i);
            }
            else
            {
                printf("The number is not prime \n");
            }
        }
        else if (i % 2 != 0)
        {
            printf("The Number is prime: %d \n",i);
        }
    }
}

void main()
{
    int a, b;
    printf("Enter the lower limit : \n");
    scanf("%d", &a);
    printf("Enter the upper limit : \n");
    scanf("%d", &b);

    prime(a, b);
}