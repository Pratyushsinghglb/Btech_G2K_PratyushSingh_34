#include <stdio.h>

void reverseArray(int arr[], int size) {
    int temp;
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap elements
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move pointers toward the middle
        start++;
        end--;
    }
}

int main() {
    int data[] = {10, 20, 30, 40, 50};
    int n = sizeof(data) / sizeof(data[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) printf("%d ", data[i]);

    reverseArray(data, n);

    printf("\nReversed array: ");
    for (int i = 0; i < n; i++) printf("%d ", data[i]);

    return 0;
}