#include<stdio.h>
// Printing the Fibonacci series 

int fibo(int n){
    if (n==1 ){
        return 0 ;
        
    } else if (n==2){
        return 1 ;
    }else {
        return fibo(n-1)+fibo(n-2);
    }

}

void main (){
    
    int a ;
    printf("Enter the No of elements you want to print  : \n");
    scanf("%d",&a);

    for (int i=1;i<=a;i++){
        printf("The %d element in the Fibonacci sequence is : %d \n",i,fibo(i));
    }

}