#include<stdio.h>

// Prime Number or not 

void main (){

    int n ; 
    printf("Enter any integer Number : \n");
    scanf("%d",&n);

if (n%2==0){
    if (n==2){
        printf("The Number is Prime \n");
    }else {
        printf("The number is not prime \n");
    }
}else if (n%2!=0){
    printf("The Number is not prime \n");
}








}