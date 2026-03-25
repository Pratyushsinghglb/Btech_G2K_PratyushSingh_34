#include <stdio.h>

int main() {
    int arr1[5], arr2[5], sum[5];
    int i;

    // Input for first array
    printf("Enter 5 elements for the first array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input for second array
    printf("Enter 5 elements for the second array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr2[i]);
    }

    // Adding elements and storing in the third array
    for(i = 0; i < 5; i++) {
        sum[i] = arr1[i] + arr2[i];
    }

    // Displaying the result
    printf("\nThe resulting sum array is:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}