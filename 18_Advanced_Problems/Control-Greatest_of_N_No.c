#include<stdio.h>
// Find the greatest of four numbers 
void main (){
    int a,b,c,d;
    printf("Enter any four integer numbers : \n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
// By using Logical Operators and using If-Else Conditions 
    if (a>b && a>c&&a>d){
        printf("The Greatest number of all is : %d\n",a);
    } else if (b>c&&b>a&&b>d){
        printf("The greatest Number of all is %d \n",b);

    }else if (c>d){
        printf("The greatest is %d \n",c);

    }else {
        printf (" %d is the greatest \n",d);
    }


    getchar();
}