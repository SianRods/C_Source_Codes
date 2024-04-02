#include<stdio.h>

void main()
{
int h, i, l, j[10][10], k[10][10], m, n, o, p[10][10];


printf("Enter the number of rows in first matrix: ");
scanf("%d", &n);
printf("Enter the number of columns in first matrix: ");
scanf("%d", &m);
printf("Enter the number of columns in second matrix: ");
scanf("%d", &o);
printf("Now enter values for first matric in row major method: \n");
for(i=0; i<n; i++)
{
for(l=0; l<m; l++)
{
scanf("%d", &j[i][l]);
}
}
printf("Now enter values for second matric in column major method: \n");
for(i=0; i<o; i++)
{
for(l=0; l<m; l++)
{
scanf("%d", &k[l][i]);
}
}
//Printing the matrices
printf("First matrix is: \n");
for(i=0; i<n; i++)
{
for(l=0; l<m; l++)
{
printf("%d ", j[i][l]);
}
printf("\n");
}
printf("Second matrix is: \n");
for(i=0; i<m; i++)
{
for(l=0; l<o; l++)
{
printf("%d ", k[i][l]);
}
printf("\n");
}
//Now multiplying the matrice
for(h=0; h<n; h++)
{
for(i=0; i<o; i++)
{
p[h][i]=0;
for(l=0; l<m; l++)
{
p[h][i] = p[h][i] + j[h][l]*k[l][i];
}
}
}
//Printing output matrix
printf("Product of matrices is: \n");
for(i=0; i<n; i++)
{
for(l=0; l<o; l++)
{
printf("%d ", p[i][l]);
}
printf("\n");
}
getchar();
}