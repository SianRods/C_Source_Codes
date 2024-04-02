// Gcd using euclidean theorem (Without Recurssion) if_ else statments 
#include<stdio.h>

void main (){
   int a,b;
    printf("Enter the first number : \n");
    scanf("%d",&a);
    printf("Enter the second number : \n");
    scanf("%d",&b); 
    int i=1 ;
    int gcd ;

    do {
    if (a>b){
        a = a-b;
        gcd =a;

    } else if (b>a){
        b=b-a;
        gcd = b ;
    } 
    i++ ;
    } while (a!=b);
    printf("The G.C.D of two numbers is : %d \n",gcd);


}