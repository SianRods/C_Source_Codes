// Program to print and input array 
#include<stdio.h>
#include<stdlib.h>

void prnt(int *j,int b){
    for (int i=1;i<b;i++){
        printf("The Element %d of the array is : %d \n",i,*j);
        j++;
    }
}
void inpt(int *j, int b){
      for (int i=1;i<b;i++){
        printf("Enter Element %d of the array is : \n",i);
        scanf("%d",j);
         j++;
    }
}



void main (){
    int n ; 

    printf("Enter the no of elements in your array : \n");
    scanf("%d",n);

    int *arr;
    arr = (int * )malloc(n*sizeof(int));
    inpt(&arr[0],n);
    prnt(&arr[0],n);


}