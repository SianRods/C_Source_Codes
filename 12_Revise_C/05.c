#include<stdio.h>

void swap(int *a, int *b){
    int x1, x2;
    x1=*a ;
    *a=*b;
    *b=x1;
}
void main (){
    int num1, num2 ;
    
    printf("Enter any integer number for num1 :\n");
    scanf("%d", &num1);

    printf("Enter any integer number for num2 :\n");
    scanf("%d", &num2);
//calling function by referencin to the address
 swap(&num1,&num2);

printf("Enter any integer number for num1 :%d\n",num1);
printf("Enter any integer number for num2 :%d \n",num2);


    getchar();
}