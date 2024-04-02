// To find the roots of the quadratic equations
#include <stdio.h>
#include <math.h>

void roots(int a, int b, int c, int delta)
{
    float x1, x2, x3, x4;
    x1 = (-b + pow(delta, 1 / 2)) / 2 * a;
    x2 = (-b - pow(delta, 1 / 2)) / 2 * a;
    x3 = (-b + pow(-delta, 1 / 2)) / 2 * a;
    x4 = (-b - pow(-delta, 1 / 2)) / 2 * a;

    if (delta == 0)
    {
        printf("The roots are equal : %f \n", x1);
    }
    else if (delta < 0)
    {
        printf("The roots are imaginary \n");
    }
    else if (delta > 0)
    {
        printf("The roots are real and are %f , %f\n", x1, x2);
    }
}
void main()
{
    int a, b, c, delta;

    printf("Enter the Co-efficients a,b,c : \n");
    scanf("%d%d%d", &a, &b, &c);

    delta = (b * b) - 4 * a * c;

    roots(a, b, c, delta);
}