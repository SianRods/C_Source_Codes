#include<stdio.h>

void main (){
    int n;
    printf("Enter any integer number \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
       if(i!=1 && i!=n) 
        if (n%i==0){
            printf("The number is not a prime number ");
            break;
        } else {
            // printf("The entered number is a prime number \n");
        }
    }
 getchar();
}