#include<stdio.h>

int sum_array(int*a, int b){
    int sum=0;
    for (int i=0;i<b;i++){
        sum =*(a)+sum;
        a++;
    }
 return sum ; 
}

// Function to add all elements of an array 

void main (){
    int *a ,r ;
    int marks[10]={12,23,43,5,4,65,76,87,76,56};
    a =&marks[0];
r = sum_array(a,10);

printf("The sum of all elements of the array are : %d \n",r);

    getchar();
}