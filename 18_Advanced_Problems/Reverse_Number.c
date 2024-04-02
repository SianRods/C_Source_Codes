//reverse of a three digit number 
// Problems in the code 
#include<stdio.h>
#include<math.h>


void main (){
    int num;
    int digit,rev=0;
    printf("Enter any three digit  number : \n");
    scanf("%d",&num);
    int i=3;
    do {
        digit=num%10;
        rev +=digit*(pow(10,--i));
       
        num =num/10;
        
    } while(i>=1);

printf("The Reverse of the given number  is : %d \n",rev);

}