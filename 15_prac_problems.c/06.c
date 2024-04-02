/*Largest and smallest element of the array*/

#include<stdio.h>

void prnt_arr(int *j,int b){

 for (int i=0;i<=b;i++){

    printf("%d \n",*(j+1));
    ;
    j++;
    }
}

void input_arr(int *j , int b){
     for (int i=0;i<b;i++){

    printf("Enter the value for element %d ;\n",(i+1));
    scanf("%d",j);
    j++;
 }

}

void main (){
    int max , min,b ;
    int arr[b];
    int *j=&arr[0];
    printf("Enter the size of array : \n");
    scanf("%d",&b);
    input_arr(&arr[0],b);
    prnt_arr(j,b);

    for (int i=0;i<b;i++){
        if (arr[i]>arr[i+1]){
            max=arr[i];
        } else if(arr[i]<arr[i+1]) {
            max=arr[i+1];
        }
    } 
    printf("The maximum Element from the Array is : %d \n",max);

     for (int j=0;j<b;j++){
        if (arr[j]>arr[j+1]){
            min=arr[j+1];
        } else if(arr[j]<arr[j+1]) {
            min=arr[j];
        }
     }
    printf("The minimum Element from the Array is : %d \n",min);

    

}