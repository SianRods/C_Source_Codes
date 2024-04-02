#include<stdio.h>
// Even odd using ternary / scope resolution opereator 
void main(){
    int num ;
    printf("Enter any number : \n");
    scanf("%d",&num);

    (num%2==0)?printf("The number is even \n"):printf("The number is Odd \n");

}