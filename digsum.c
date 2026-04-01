#include <stdio.h>

int main() {
    int matrix[3][3] = {
        {1, 5, 9},
        {8, 2, 3},
        {4, 6, 7}
    };
    int i, j, sum = 0;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(i == j) {
                sum = sum + matrix[i][j];
            }
        }
    }

    printf("Sum of diagonal elements: %d", sum);

    return 0;
}
