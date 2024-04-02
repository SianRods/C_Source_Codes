#include<stdio.h>

int gcd(int a, int b){
    if(b==0){
        return a;
    }else{
        return gcd(b,a%b);
    }
}

void main(){
    int a , b ;
    printf("Enter any two numbers : \n");
    scanf("%d%d",&a,&b);

    printf("The Gcd of two numbers is now : %d",gcd(a,b));


    getchar();
}