// Printing Fibonnaci sequence using recurssion 
//  0,1,1,2,3,5,8,13,.......

#include<stdio.h>

int  fibo(int n){
    int result ;
   if (n==1){
    return 0 ;
   } else if (n==2){
    return 1;
   } else {
    result = fibo(n-1)+fibo(n-2);
   }
    return result ;
}

void main (){
    int n ;
    printf("Enter the fibonacci term you want : \n");
    scanf("%d",&n);

    printf("The Required Fibonacci term is : %d \n",fibo(n));


}