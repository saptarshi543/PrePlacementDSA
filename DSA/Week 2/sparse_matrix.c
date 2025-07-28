#include <stdio.h>
 int isSparse(int rows, int cols, int matrix[][cols]) { int zero_count = 0; int total_elements = rows * cols;
// Count the number of zero elements
for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
        if (matrix[i][j] == 0) {
            zero_count++;
        }
    }
}

// Check if the number of zeros is greater than half the total elements
if (zero_count > (total_elements / 2)) {
    return 1; // It's a sparse matrix
} else {
    return 0; // It's not a sparse matrix
}
 
}
void main() { 
    int matrix1_rows = 4,matrix1_cols = 3; 
    int matrix1[][3] = {
        {0, 0, 0}, 
        {0, 1, 0}, 
        {0, 0, 0}, 
        {5, 0, 0} 
    };
for (int i = 0; i < matrix1_rows; i++) {
    for (int j = 0; j < matrix1_cols; j++) {
        printf("%d ", matrix1[i][j]);
    }
    printf("\n");
}

if (isSparse(matrix1_rows, matrix1_cols, matrix1))
    printf("Matrix 1 is a sparse matrix.\n");
else
    printf("Matrix 1 is not a sparse matrix.\n");
printf("\n");
}