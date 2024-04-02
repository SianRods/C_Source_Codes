// Printing of an array and initialisation using pointers and functions 

#include<stdio.h>

void print(int arr[],int b);
void inputarr(int *j,int b);
void main (){
    int arr[4];
    printf("Please enter your array : \n");
    inputarr(&arr[0],4);
    printf("You have now successfully entered the Array : \n");
    print(arr,4);

}

void print(int arr[],int b){
for (int i=0;i<b;i++){
    printf("The value of the %d element is : %d \n",(i+1),arr[i]);
}
}

void inputarr(int *j,int b){
    for (int i=0;i<b;i++){
        printf("Enter the value of %d element : \n",(i+1));
        scanf("%d",j);
        j++;
    }
}