#include<stdio.h>

int  main (){
    /*Printing the prime numbers between 1 to 100*/
    
    int j ;
    
    printf("Write a program to print all the Prime Numbers Between 1 to 100");

    while(j<=25){
        for(int i =1 ; i<j ; i++){
            if(j%i!=0){
                printf("The %d th Prime Number is %d\n",j,i);
            }

        }




    }
    return 0 ;
}