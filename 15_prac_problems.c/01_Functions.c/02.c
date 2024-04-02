// GCD using Recurssive Functions 
#include<stdio.h>

int gcd (int a , int b ){
    if (b==0){
        return a ;
    } else if(b!=0){
        return gcd(b,a%b);
    }
}
void main (){
    int a , b ;
    printf("Enter any two integer numbers : \n");
    scanf("%d%d",&a,&b);

    printf("The GCD of both the numbers is : %d \n",gcd(a,b));


}