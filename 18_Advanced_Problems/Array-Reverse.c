#include<stdio.h>
// Reversing an Array 

void revarr(int *arr,int b){
     // Reversing the array 

    int temp;
    for (int i=0;i=b/2;i++){
        temp=arr[i];
        arr[i]=arr[b-1-i];
        arr[b-1-i]=temp;
    }

    printf("The value of array is now : \n");

    for (int i=0;i<b;i++){
        printf("|%d",arr[i]);
    }

}


void main (){
    int arr[4];
    for (int i=0;i<4;i++){
        printf("Enter the %d elements of the array : \n",(i+1));
        scanf("%d",&arr[i]);
    }

    for (int i=0;i<4;i++){
        printf("|%d",arr[i]);
    }

   revarr(arr,4);

}