//To find the factorial using loops 
#include<stdio.h>

void main (){
    int num,factorial =1 ;
    printf("Enter the number for Calcuating the factorial : \n");
    scanf("%d",&num);

    for (int i=1;i<=num;i++){
        factorial *=i;
    }

    printf("The factorial of the num %d is :%d \n",num,factorial);
    //No need to write for  as we have already intialized factorial to 1 
    // Special case for zero 
    if (num==0){
        factorial =1;
    }

}