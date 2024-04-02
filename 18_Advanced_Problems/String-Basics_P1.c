// String Basics Part 1
#include <stdio.h>

void main()
{

    char str[10];
    char str1[] = "Sian Rodrigues ";
    char dup[] = {'R', 'y', 'a', 'n', '\0'};
    char *j = &dup[0]; // U need to use character pointer for strings Remember

    printf("Enter your name : \n");
    scanf("%s", str);

    printf("%s\n", str);
    printf("%s\n", str1);
    printf("\n");
    while (*(j) != '\0')
    {
        printf("%c", *j);
        j++;
    }
    printf("\n");
    printf("%s \n", dup);
    getchar();
}