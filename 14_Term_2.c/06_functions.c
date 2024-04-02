// Write a Function for GCD Using Recurssion  
#include<stdio.h>

int gcd(int a, int b){
// first we create if one of the numbers is zero
if (b==0){
    return a; 
} else {
    return gcd(b,a%b);
}
}

void main (){
int num1 , num2 ;
printf("Enter the two numbers : \n");
scanf("%d%d",&num1,&num2);

printf("The GCD of both the numbers is : %d",gcd(num1,num2));

printf("The L.C.M of the two numbers is : %d ", lcm(num1,num2));
getchar();

}

int lcm(int a , int b){ 
    int k ;k =gcd( a, b);
    int result ;
    result= (a*b)/k ;
    return result ;
}