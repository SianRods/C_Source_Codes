// Fibonnaci Seriestill nth  number 
#include<stdio.h>

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
     printf("Enter the element you want to enter : \n");
     scanf("%d",&a);

    printf("The %d element in the fiboacci sequence is : %d \n",a,fibo(a));

}