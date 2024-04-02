#include<stdio.h>


void main (){
    int arr[3][3];
    printf("Enter the elements for a 3*3 Array \n");

    for (int i=0 ; i<3;i++){
        for (int j =0;j<3;j++){
            printf("Enter element for %d,%d \n",i+1,j+1);
            scanf("%d%d",&arr[i],&arr[j]);

         }

    }

    for (int k=0;k<3;k++){
        for(int l =0;l<3;l++){
            printf("The elements of the given 2D Array are : %d,%d \n",arr[k],arr[l]);
        }
    }


    printf("The program has been successfully runned \n");

    getch();
}