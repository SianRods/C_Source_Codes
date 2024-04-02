#include<stdio.h>

int max(int a, int b){
    if (a>b){
       return a;
    } else if (b>a){
        return b;
    } else if (a==b){
        return a ;
    }   
}
int min(int a, int b){
    if (a>b){
       return b;
    } else if (b>a){
        return a;
    } else if(a==b){
        return b;
    }
    
}

void main(){
    int num1 , num2 ;
    printf("Enter any firstinteger numbers :");
    scanf("%d",&num1 );

    printf("Enter any second  integer numbers :");
    scanf("%d",&num2 );

    printf("The minimum out of both the numbers is %d",min(num1,num2));
    printf("The maximum out of both the number is %d",max(num1,num2));

    getchar();
}