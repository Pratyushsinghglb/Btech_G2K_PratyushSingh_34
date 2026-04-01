#include <stdio.h>

int main() {
    int arr[] = {12, 45, 6, 90, 23, 78, 34};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_val, min_val;
    int i;

    if (n == 0) {
        printf("Array is empty\n");
        return 1;
    }

    max_val = arr[0];
    min_val = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }

    printf("Maximum element is: %d\n", max_val);
    printf("Minimum element is: %d\n", min_val);

    return 0;
}
