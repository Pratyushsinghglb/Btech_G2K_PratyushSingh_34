#include <stdio.h>
int main() {
    int i;
    float sum = 0.0;
    printf("series: ");
    for (i=1;i<=4;i++){
        printf("1/%d",i);
        sum += 1.0/i;
        if(i<4){
            printf("+");
        }
    }
    printf("\nsum of series = %.2f\n",sum);
    return 0;
}