#include<stdio.h>

// printing a 1d array 
// Note that indexing of an array starts from 0 itself 
void main(){
    int marks[10];
    for (int i=0;i<10;i++){
        printf("Enter the marks of student no %d \n",(i+1));
        scanf("%d" ,&marks[i]);

    }
    for (int j=0 ;j<10;j++)
    {
        printf("The marks of student no %d is %d \n",(j+1),marks[j]);
    }

    getchar();
}