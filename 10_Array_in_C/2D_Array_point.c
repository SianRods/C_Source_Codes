#include<stdio.h>

void main(){
    int mat[2][2];
    int *l = &mat[0][0];

    for (int i=0;i<2;i++){
    for (int j=0;j<2;j++){
        printf("Enter the value for %d row & %d colomn\n",(i+1),(j+1));
        scanf("%d",&mat[i][j]);
    }
}

// Printing Becomes far more convenient incase for 2D Array when we use pointer method 

for (int k=0;k<2;k++){
    for (int m=0;m<2;m++){
        printf("The value of element of %d row & %d coloumn is : %d \n",(k+1),(m+1),*(l));
    l++; // This Right here is an important step in printing using pointers 
    }
       
}

    getchar();
}