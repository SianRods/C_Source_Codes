//Program to find average of the three numbers 
#include<conio.h>
#include<stdio.h>

float aver_ (int num_1, int num_2 ,int num_3);

void main(){
    int num_1 , num_2, num_3 ;
    printf("Enter any three numbers for which you wan to calculate the average ");
    scanf("%d,%d,%d",&num_1,&num_2,&num_3);
    float result = aver_(num_1,num_2,num_3);
    printf("The average of the three numbers is %f",result );
    getch();
}

float aver_ (a,b,c){
    int aver ;
    aver = (a+b+c)/3 ;

    return aver;

}