#include <stdio.h>
void transpose(int n, int matrix[][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            // Swap elements across the main diagonal
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
} 
// Function to print the matrix
void printMatrix(int n, int matrix[][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
 
void main() {
    int n = 3; // Size of the square matrix
    int matrix[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
 
    printf("Original Matrix:\n");
    printMatrix(n, matrix);
 
    // Rotate the matrix by 90 degrees clockwise
    transpose(n, matrix);
 
    printf("\nTranaspose of matrix is: :\n");
    printMatrix(n, matrix);
}
