#include <stdio.h>

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int rows = 3;
    int cols = 3;
    int even_count = 0;
    int odd_count = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }
    }

    printf("Total even numbers: %d\n", even_count);
    printf("Total odd numbers: %d\n", odd_count);

    return 0;
}
