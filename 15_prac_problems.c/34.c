// Matrix Mutiplication using row major order(first matrix ) and coloumn major order (second matrix )
#include <stdio.h>
/* The method used is same as the problem no. 33 the only difference here is the creation of function 
to calculte the matrix multiplication 

*/

void multiplyMatrices(int A[][100], int B[][100], int result[][100], int m, int n, int p, int q);

int main() {
    int m, n, p, q;

    // Read the dimensions of matrix A
    printf("Enter the number of rows and columns of matrix A (m x n): ");
    scanf("%d %d", &m, &n);

    // Read matrix A in row-major order
    int matrixA[100][100];
    printf("Enter the elements of matrix A in row-major order:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    // Read the dimensions of matrix B
    printf("Enter the number of rows and columns of matrix B (p x q): ");
    scanf("%d %d", &p, &q);

    // Read matrix B in column-major order
    int matrixB[100][100];
    printf("Enter the elements of matrix B in column-major order:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &matrixB[j][i]);  // Note the order for column-major
        }
    }

    // Check if multiplication is possible
    if (n != p) {
        printf("Error: Matrix multiplication is not possible due to incompatible dimensions.\n");
        return 1;
    }

    // Multiply matrices A and B
    int result[100][100];
    multiplyMatrices(matrixA, matrixB, result, m, n, p, q);

    // Print matrices A, B, and the result
    printf("\nMatrix A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrixA[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d\t", matrixB[j][i]);  // Note the order for column-major
        }
        printf("\n");
    }

    printf("\nResultant Matrix (A * B):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void multiplyMatrices(int A[][100], int B[][100], int result[][100], int m, int n, int p, int q) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
