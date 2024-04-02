// Printing the fibonacci sequence upto nth term 
#include<stdio.h>

// Formula for removing nth term of the fibonacci sequence 
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

// Printing Fibonacci Sequence using the definition using for Loop 
void print(int a){
    for (int i=1;i<=a;i++){
        printf("%d\n",fibo(i));
    }

}
// The main functions 
void main (){
    int num ;
    printf("Enter the series limit you want to print : \n");
    scanf("%d",&num);
    print(num); // Never make a call including the type of function involed 
}