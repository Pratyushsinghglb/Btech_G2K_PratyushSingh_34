#include <stdio.h>
int main() {
    int n,sum;
    printf("Enter no ");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;
    printf("sum = %d", sum);
    return 0;
}