//  Swapping using call by reference    
#include<stdio.h>
void swap(int *a,int *b){
    int temp ;
    temp =*a;
    *a=*b;
    *b=temp ;
    // Swapping the values using a temporary varible 
}
void main (){
    int a,b ;
    printf("Enter the value of two integer numbers : \n");
    scanf("%d%d",&a,&b);

    swap(&a,&b);
    printf("The value of a is now : %d \n The value of B is now :%d \n",a,b);


    getchar();
}