#include<stdio.h>
int main()
{
    int n,i;

    printf("enter the no of elements of array:");
    scanf("%d",&n);
    int a[n] , sum=0, avg;
    printf("enter the elements of array:");

    for(int i=0; i<n;i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n;i++){
        sum= sum+a[i];

    }printf("the sum of array is:%d\n", sum);

    avg=sum/n;
    printf("average of the array is:%d", avg);
    return 0;
} 