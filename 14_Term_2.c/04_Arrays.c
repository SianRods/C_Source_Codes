#include<stdio.h>
// 2d arrays 

//Function for taking the input from user depending upon the size of the matrix 
// Using Rows & Coloumns and by pointing at the the first element 
void input(int *j,int a,int b){
for (int k=0; k<a;k++){
    for(int n=0;n<b;n++){
        printf("Enter the value of %d%d element :\n",(k+1),(n+1));
        scanf("%d",j);
        j++;
    }
}
}
// Using same concept to print a 2D array 
void print(int *j,int a,int b){
for (int k=0; k<a;k++){
    for(int n=0;n<b;n++){
        printf("Enter the value of %d%d element :%d\n",(k+1),(n+1),*(j));
        j++;
    }
}

}
void main (){
int a,b;
int matrix [a][b];
int *j =&matrix[0][0];
printf("Enter the values of rows and comloumns you want in your matrix : \n");
scanf("%d%d",&a,&b);

input(j,a,b);
print(j,a,b);


    getchar();
}