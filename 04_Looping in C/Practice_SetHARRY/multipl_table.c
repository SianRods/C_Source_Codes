#include<conio.h>
#include<stdio.h>
void main()
{
    int a,b;
    printf("enter any number ");
    scanf("%d",&a);

 for(int i =10 ; i>=0; i--) //table of 10 printed in the reverse order 
 {
    printf(" %d\n", i*a);
 }

getch();


}
