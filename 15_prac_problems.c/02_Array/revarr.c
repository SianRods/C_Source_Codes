#include<stdio.h>

void rev (int arr[],int start , int end ){
    int temp;
    while (start<end ){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp ;
        end --;
        start ++;
    }
}
void main (){
    int arr[5]={1,23,4,65,76};

    rev(arr,0,4);

    for (int i=0;i<5;i++){
        printf("%d \n",arr[i]);
    }






}