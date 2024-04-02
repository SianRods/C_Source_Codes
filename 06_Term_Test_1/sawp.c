#include <stdio.h>
#include <conio.h>

void main(){
 int a,b;
 printf("Enter the Number for A:");
 scanf("%d",&a);
 
 printf("Enter the second number for B:");
 scanf("%d",&b);

 a = a + b;
 b = a-b ;
 a = a- b ;
 printf("The value of A is now : %d \n",a);
 printf("The value of B is now : %d\n",b);





    getch();
}