#include<stdio.h>

// Printing a Fibbonacci Sequence .
/*
0,1,1,2,3,5,8,13,....
*/

int fibo(int a ){
    int result ;
    if (a==1){
        return 1;
    
    }
    else{
        result = fibo(a-1)+fibo(a-2);
    }
    return result ;
}

void main (){
    int a ;
    printf("Enter the element of Fibonacci Sequnce You want to Print :");
    scanf("%d",&a);

    fibo(a);

    printf("The %dth Element of the Fibonacci Sequence is : %d",a,fibo(a));

    getchar();
}