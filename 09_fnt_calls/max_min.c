#include<stdio.h>

int max(int a , int b ){
    int result ; 
    if (a>b){
        result = a ;
    } else if (b>a){
        result  = b ;
    }
    return result ;
}

int min (int a , int b ){
    int result ;
    if (a>b){
        result = b;
    } else if (b>a){
        result  = a;
    }


    return result ;
}
void main(){
    int num1, num2 ;
    printf("Enter any Two integer numbers : \n");
    scanf("%d%d",&num1,&num2 );

    printf("The maximum between both the numbers is : %d \n",max(num1,num2));
    printf("The Minimum of two numbers is : %d",min(num1,num2));

    getch();
    
}