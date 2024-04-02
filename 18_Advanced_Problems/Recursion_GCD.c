#include<stdio.h>

int gcd(int x, int y ); // function prototype 

void main (){
    int a,b;
    printf("Enter the first number : \n");
    scanf("%d",&a);
    printf("Enter the second number : \n");
    scanf("%d",&b);
    printf("The G.C.D of the given two numbers is : %d \n",gcd(a,b));
}

int gcd(x,y){
    if (x==0){ // when we are assuming that x is equal to zero meaning x is minimum here 
        return y ;
    } else {
        return gcd (y%x,x); // y being maximum on applying the euclids theorem 
    }


}