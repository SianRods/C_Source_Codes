#include <stdio.h>
#include <string.h>
#include<stdlib.h>


void main()
{
    int n;
    char *str;
    printf("Enter the No of Chracters in your String : \n");
    scanf("%d",&n);
    str = (char *)malloc(n+1 * sizeof(char));
    printf("Enter the value for String : \n");
    scanf("%s",str);
    // gets(str);

// Reversing the string 
    char *rev;
    rev = (char *)malloc(n+1 * sizeof(char));

    for (int i = 0; i < n; i++)
    {
        int j = (n-1);
        rev[i] = str[j];
        j--;
    }
    int k;
    k = strcmp(rev, str);
    if (k == 0)
    {
        printf("The string is palindrome \n");
    }
    else if 
        (k > 0 || k < 0)
        {
            printf("The String is not Palindrome \n");
        }

    getchar();
}