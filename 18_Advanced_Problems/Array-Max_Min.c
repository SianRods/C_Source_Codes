#include<stdio.h>

int max(int *arr,int size){
    int max;
    for (int i=0;i<size;i++){
        if (arr[i]>arr[i+1]){
            return arr[i];
        } else if (arr[i+1]>arr[i]){
            return arr[i+1];
        }
    }
 ;
}
void main (){
    int arr[6];
// print array 
    for(int i=0;i<6;i++){
        printf("Enter the value of the element %d \n",(i+1));
        scanf("%d",&arr[i]);        
    }
// print array 
for(int i=0;i<6;i++){
        printf(" value of the element : %d \n",arr[i]);
               
    }

printf("The maximum number is %d \n",max(arr,6));


}