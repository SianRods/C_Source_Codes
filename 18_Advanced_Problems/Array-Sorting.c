#include<stdio.h>
// Soring Array In ascending order 
void sort(int *arr,int size){
   int temp;
   for(int i=0;i<size;i++)
    for (int j=0;j<size-i;j++){
        if (arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;

        }
    }
} 

void main (){
    int arr[5];
    // Inputting the array
    for(int i=0;i<5;i++){
        printf("Enter the value of %d element\n",(i+1));
        scanf("%d",&arr[i]);
    }

 for(int i=0;i<5;i++){
        printf("Value of %d is %d \n",(i+1),arr[i]); 
    }
// Sortin the array linearly
sort(arr,5);

 for(int i=0;i<5;i++){
        printf("Value of %d is %d \n",(i+1),arr[i]); 
    }
}