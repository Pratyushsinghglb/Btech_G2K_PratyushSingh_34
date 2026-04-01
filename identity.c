#include <stdio.h>

int main() {
    int a[10][10];
    int i, j, row, col, isIdentity = 1;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &col);

    if (row != col) {
        printf("The matrix is not a square matrix, so it cannot be an identity matrix.\n");
        return 0;
    }

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if ((i == j && a[i][j] != 1) || (i != j && a[i][j] != 0)) {
                isIdentity = 0;
                break;
            }
        }
        if (isIdentity == 0) {
            break;
        }
    }

    if (isIdentity == 1) {
        printf("The matrix is an identity matrix.\n");
    } else {
        printf("The matrix is not an identity matrix.\n");
    }

    return 0;
}
