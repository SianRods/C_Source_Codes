//Print Fibonacci sereis 
#include<stdio.h>

void main (){
    int n,sum=0;
    printf("Enter the no of elements of fibonacci seires to print: \n");
    scanf("%d",&n);

    for (int i=0;i<=n;i++){
      
        sum +=i;
        printf("%d",sum);
    }

}