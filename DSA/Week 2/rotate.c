#include <stdio.h>
 
// Function to transpose the matrix
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
 
// Function to reverse each row of the matrix
void reverseRows(int n, int matrix[][n]) {
    for (int i = 0; i < n; i++) {
        int start = 0,end=n-1;
        while (start < end) {
            // Swap elements from the beginning and end of the row
            int temp = matrix[i][start];
            matrix[i][start] = matrix[i][end];
            matrix[i][end] = temp;
            start++;
            end--;
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
    int n = 3; // 3x3 matrix
    int matrix[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
 
    printf("Original Matrix:\n");
    printMatrix(n, matrix);
 
    // Rotate the matrix by 90 degrees clockwise
    transpose(n, matrix);
    reverseRows(n, matrix);
 
    printf("\nMatrix after 90 degree clockwise rotation:\n");
    printMatrix(n, matrix);

}