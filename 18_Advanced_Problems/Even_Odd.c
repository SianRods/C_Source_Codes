#include<stdio.h>
// even odd number 
void main (){
    int num ;
    printf("Enter any number : \n");
    scanf("%d",&num);

    if (num%2==0){
    printf("The number is even number \n");
    }
    else if(num%2!=0){
    printf("The number is odd number \n");
    }
}