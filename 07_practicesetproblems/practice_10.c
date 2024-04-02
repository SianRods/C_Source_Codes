#include<conio.h>
#include<stdio.h>

void main(){
    // program to add the multilplication of table of n from 1 to 10 

    int num , sum = 0 ;
    printf("Enter the value of Table you want to print \n");
    scanf("%d", &num);

for (int i = 0 ; i <= 10 ; i++){
    sum = sum + (num*i) ;
    printf("%d",num*i);
}

printf("The sum of table of %d is %d \n",num,sum);



    getch();
}