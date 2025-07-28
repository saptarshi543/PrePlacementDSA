#include <stdio.h>
void printSpiral(int rows, int cols, int matrix[][cols]) {
    int top = 0;   
    int bottom = rows - 1;   
    int left = 0;      
    int right = cols - 1;   
 
   
    while (top <= bottom && left <= right) {
 
        // Print the top row from left to right
        for (int i = left; i <= right; i++) {
            printf("%d ", matrix[top][i]);
        }
        top++; 
 
        // Print the rightmost column from top to bottom
        for (int i = top; i <= bottom; i++) {
            printf("%d ", matrix[i][right]);
        }
        right--; 
 
        // Check if top is still less than or equal to bottom to avoid duplicates in a single row matrix
        if (top <= bottom) {
            // Print the bottom row from right to left
            for (int i = right; i >= left; i--) {
                printf("%d ", matrix[bottom][i]);
            }
            bottom--; 
        }
 
        // Check if left is still less than or equal to right to avoid duplicates in a single column matrix
        if (left <= right) {
            // Print the leftmost column from bottom to top
            for (int i = bottom; i >= top; i--) {
                printf("%d ", matrix[i][left]);
            }
            left++; // Move the left boundary to the right
        }
    }
}
 
void main() {
    int rows = 4;
    int cols = 4;
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
 
    printf("Spiral traversal of the matrix:\n");
    printSpiral(rows, cols, matrix);
    printf("\n");

}