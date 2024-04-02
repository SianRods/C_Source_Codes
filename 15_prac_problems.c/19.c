// Program to reverse a number 
#include<stdio.h>
#include<math.h>

int  main(){
    int num , rev=0,digit ;
    printf("Enter any three digit integer number : \n");
    scanf("%d",&num);

    for (int i=3;i>=1;i--){
        // 326  
        digit=num%10;
        rev += digit*pow(10,i-1);
        num=num/10;

    }
    
 
    printf("The reverse of the Given number is : %d \n",rev);
    return 0;


}