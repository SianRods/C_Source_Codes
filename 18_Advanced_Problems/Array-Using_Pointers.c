#include<stdio.h>

void main (){
    
    int *j ;
    for (int i=0;i<6;i++){
        printf("Enter the value of %d th element \n",(i+1));
        scanf("%d",j);
        j++;
    }

    printf("The matrix you have entred is : \n");
    for (int i=0;i<6;i++){
        printf("The value of %d element is %d ",(i+1),*j);
        j++;
    }
}