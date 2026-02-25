#include<stdio.h>
int main(){
    int num, digit1, digit2, sum;
    printf("Enter a two digit number: ");
    scanf("%d" , &num);
    digit1 = num / 10;
    digit2 = num % 10;
    sum = digit1 + digit2;
    printf("sum of digits = %d", sum);
    return 0;
}