#include<stdio.h>
#include<strings.h>

void main () {
    char n[10];
    printf("Kindly your your Good name sir : \n");
    gets(n);

    char m[20];
    printf("Kindly Enter your active Email address sir : \n");
    gets(m);

    printf("Your email address is : \n");
    puts(m);

    printf("Your name is : ");
    puts(n);

    getchar();
}
/*strcpy(target , source );
note that for this target string should have 
enough capacity to store the content */