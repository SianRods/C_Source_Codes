// Factorial using recurssions
#include <stdio.h>

int fact(int a)
{
    int result;
    if (a == 0 || a == 1)
    {
        return 1;
    }
    result = fact(a - 1) * a;
    return result;
}

void main()
{
    int num;
    printf("Enter the number for cal : \n");
    scanf("%d", &num);
    printf("The factorial of the number is : %d \n", fact(num));
}