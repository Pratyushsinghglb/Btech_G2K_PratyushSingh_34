#include <stdio.h>

int main() {
    // 1. Predefined 2x2 Matrix
    int matrix[2][2] = {
        {5, 10},
        {15, 20}
    };
    int i, j, sum;

    // Display the Matrix
    printf("Matrix (2x2):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // 2. Add and Print Rows
    printf("\n--- Row Sums ---\n");
    for (i = 0; i < 2; i++) {
        sum = 0; // Reset sum for new row
        for (j = 0; j < 2; j++) {
            sum += matrix[i][j];
        }
        printf("Row %d Sum = %d\n", i + 1, sum);
    }

    // 3. Add and Print Columns
    printf("\n--- Column Sums ---\n");
    for (j = 0; j < 2; j++) {
        sum = 0; // Reset sum for new column
        for (i = 0; i < 2; i++) {
            sum += matrix[i][j];
        }
        printf("Column %d Sum = %d\n", j + 1, sum);
    }

    return 0;
}
