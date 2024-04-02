#include<stdio.h>

int min(int arr[],int b)
{   int temp ;
    for (int i=0;i<b;i++){
        if (arr[i]>arr[i+1]){
            temp =  arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        } 
    }
}

void main (){
    int arr[5];
    for (int i=0;i<5;i++){
        printf("Enter the %d element of the Array : \n",(i+1));
        scanf("%d",&arr[i]);
    }

      for (int i=0;i<5;i++){
        printf(" %d\n",arr[i]);
      
    }

    min(arr,5);
    printf("The sorted array is :  \n");
   for (int i=0;i<5;i++){
        printf(" %d\n",arr[i]);
      
    }




}