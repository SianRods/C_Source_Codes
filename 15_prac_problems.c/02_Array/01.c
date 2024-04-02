// Matrix Multiplication in an array 
#include<stdio.h>

void main (){
    int mat1[3][3];
    int mat2 [3][2];

    printf("Input the First Matrix : \n");
    for (int i=0 ;i<3;i++){
        for (int j=0;j<3;j++){
            printf("Enter the element %d%d of the first matrix : \n",(i+1),(j+1));
            scanf("%d",&mat1[i][j]);
            
        }
    }

     for (int i=0 ;i<3;i++){
        for (int j=0;j<3;j++){
            printf("The element %d%d of the first matrix  is : %d \n",(i+1),(j+1),mat1[i][j]);  
        }
    }

    printf("Input the Second Matrix : \n");
    for (int i=0 ;i<3;i++){
        for (int j=0;j<2;j++){
            printf("Enter the element %d%d of the first matrix : \n",(i+1),(j+1));
            scanf("%d",&mat2[i][j]);
            
        }
    }
    
     for (int i=0 ;i<3;i++){
        for (int j=0;j<2;j++){
            printf("The element %d%d of the Second matrix  is : %d \n",(i+1),(j+1),mat2[i][j]);  
        }
    }

    int result[3][2];
    int sum ;

    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            for (int k=0;k<2;k++){
               
               sum +=mat1[i][k]*mat2[k][j]    ;
               result[i][k]=sum;
           }
        sum =0 ;}

    }
    
    printf("The Resultant Matrix is : \n");

 for (int i=0 ;i<3;i++){
        for (int j=0;j<2;j++){
            printf("The element %d%d of the Resultant  matrix  is : %d \n",(i+1),(j+1),result[i][j]);  
        }
    }

    /*If we want to show the final result in matrix form print only element and use tab comment and in outer loop 
    use new line comment in outer loop  */





}