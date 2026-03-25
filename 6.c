#include <stdio.h>

int main() {
    int a[3][3], b[3][3], i, j;
    int isEqual = 1; // Assume they are equal initially

    printf("Enter the elements of first matrix (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of second matrix (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Checking for equality
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (a[i][j] != b[i][j]) {
                isEqual = 0; // Found a mismatch
                break;       // Exit inner loop
            }
        }
        if (isEqual == 0) break; // Exit outer loop
    }

    if (isEqual == 1) {
        printf("\nThe matrices are equal.\n");
    } else {
        printf("\nThe matrices are not equal.\n");
    }

    return 0;
}