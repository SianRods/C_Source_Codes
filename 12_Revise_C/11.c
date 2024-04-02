#include<stdio.h>

void main (){
    int mat[2][2];
// in order to take inputs for a 2d array we need to use 2 control structures 
for (int i=0;i<2;i++){
    for (int j=0;j<2;j++){
        printf("Enter the value for %d row & %d colomn\n",(i+1),(j+1));
        scanf("%d",&mat[i][j]);
    }
}

// Printing the given 2d array 
for (int k=0;k<2;k++){
    for (int m=0;m<2;m++){
        printf("The value of element of %d row & %d coloumn is : %d \n",(k+1),(m+1),(mat[k][m]));
    }
}

    getchar();
}