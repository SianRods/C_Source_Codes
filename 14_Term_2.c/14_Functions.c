#include<stdio.h>

int gcd(int num1 , int num2){
    
    while (num1!=num2){
        if(num1>num2){
         num1 -= num2 ;
        }
            else{
                num2 -= num1 ;
            }
        return num1 ;
    }



}
void main (){
int a , b ;
    printf("Enter any two numbers : \n");
    scanf("%d%d",&a,&b);

    printf("The Gcd of two numbers is now : %d",gcd(a,b));


    getchar();
}