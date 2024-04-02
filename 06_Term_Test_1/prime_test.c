#include<stdio.h>


int main(){
    int num_1 ;
    printf("Enter any number :\n");
    scanf("%d",&num_1);

    for (int i = 1; i < num_1; i++)
    {
            if(num_1%i==2){
                printf("The Given Number is not a Prime number !");

            } else{
                printf("The Given NUmber is a Prime Number  ");
            }


    }
return 0 ;    
}