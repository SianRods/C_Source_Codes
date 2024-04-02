// Program to delete an element from the array 
#include<stdio.h>

// Uing linear search to find the index of the element to be deleted 
int linear_srch(int a, int arr [],int b){
    for (int i=0;i<b;i++){
        if (arr[i]==a){
            return i ;
            break ;
        }
    }
}

// Main function
void main (){
    // Hard Coding an Array 
    int arr[5]={1,2,3,4,5};
    int ele ;
    //Printing an Array 
    for (int i=0;i<5;i++){
        printf(" %d \n",arr[i]);
            }
    // Taking selection for given array 
    printf("Select the element you want to delete : \n");
    scanf("%d",&ele);

    //Shifting all the elements post index to the index and reducing the size of the array 
    for (int j=linear_srch(ele,arr,5);j<(5-1);j++){
        arr[j]=arr[j+1];
    }

    // Printing the reduced array as well as Deleted one 
    for (int i=0;i<(5-1);i++){
        printf(" %d \n",arr[i]);
            }


}