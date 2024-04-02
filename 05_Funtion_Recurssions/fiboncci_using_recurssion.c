#include<stdio.h>

// 0,1,1,2,3,5,8,13,......... Nature's Prominent Sequence .

int fibo(int a );

int main (){
    int a ;

    printf("Enter the nTH Element you want to find in the fibonaaci series : \n ");
    scanf("%d",&a);

    int d = fibo(a);

    printf("The %dth Element of the fibonacci sequence is : %d",a,d);
}



int fibo(int a){

    if(a=1){
        return 0;
    }
    else{
        int result ;
        result = fibo(a-1) + fibo(a-2);
        return result ;
    }
}