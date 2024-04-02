// Sum of digits in a number
#include<stdio.h>

void main (){

    int num;
    int sum=0,digit;
    printf("Enter any three digit  number : \n");
    scanf("%d",&num);

    for (int i=1;i<=3;i++){
    
        digit=num%10;
        sum +=digit;
        num = num/10;
        if (i==3){
            printf("The sum of all the digits is %d \n",sum);
        }
    }
    


}