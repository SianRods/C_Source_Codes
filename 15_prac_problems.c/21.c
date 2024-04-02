// GCD and LCM of tow numbers using remainder euclidean algorithm 
//Here We are using recurssion functions 
#include<stdio.h>
int gcd(int a , int b){
    if (b==0){
        return a;
       } else {
            return gcd(b,a%b);
            }
    }

void main (){
    int a, b ;
    printf("Enter any two numbers : \n");
    scanf("%d%d",&a,&b);

printf("The G.C.D pf two numbers is : %d \n",gcd(a,b));




}