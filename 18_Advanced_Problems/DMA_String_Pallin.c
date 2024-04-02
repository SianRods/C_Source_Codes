// Corrected Code for String Palindrome 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n;
    char *str;

    printf("Enter the No of Characters in your String: \n");
    scanf("%d", &n);

    // Allocate memory for the string
    str = (char *)malloc((n + 1) * sizeof(char));

    if (str == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the value for String: \n");
    scanf("%s", str);

    // Reversing the string
    char *rev;
    rev = (char *)malloc((n + 1) * sizeof(char));

    for (int i = 0, j = n - 1; i < n; i++, j--) {
        rev[i] = str[j];
    }
    rev[n] = '\0'; // Null-terminate the reversed string

    int k;
    k = strcmp(rev, str);
    if (k == 0) {
        printf("The string is a palindrome\n");
    } else {
        printf("The String is not a palindrome\n");
    }

    // Free allocated memory
    free(str);
    free(rev);

    return 0;
}