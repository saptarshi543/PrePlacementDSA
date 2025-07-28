#include <stdio.h>
void calculateDiagonalSums(int n, int matrix[][n]) { int main_diagonal_sum = 0; int anti_diagonal_sum = 0;
for (int i = 0; i < n; i++) {
    // Sum of main diagonal elements (where row index == column index)
    main_diagonal_sum += matrix[i][i];

    // Sum of anti-diagonal elements (where row index + column index == n - 1)
    anti_diagonal_sum += matrix[i][n - i - 1];
}

printf("Sum of Main Diagonal: %d\n", main_diagonal_sum);
printf("Sum of Anti-Diagonal: %d\n", anti_diagonal_sum);
}
void main() { int n = 3;printf("Matrix:\n");
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        printf("%d ", matrix[i][j]);
    }
    printf("\n");
}

calculateDiagonalSums(n, matrix); 
}