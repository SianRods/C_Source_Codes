//To check positive negative or zero 
#include<stdio.h>

void main (){
    int num ;
     printf("Enter any integer number : \n");
     scanf("%d",&num);

     if (num>0){
        printf("The number is positive \n");
     }else if (num<0){
        printf("The number is negative \n");
     }else if (num ==0){
        printf("The number is Zero \n");
     }


}