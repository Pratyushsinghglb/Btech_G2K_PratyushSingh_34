//WAP TO REVERSE AN ARRAY
#include<stdio.h>
int main()
{
    int n ,i;
    printf("enter the no of elements of an array:");
    scanf("%d", &n);
    int a[i];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }


    for(int i=n-1; i>=0; i--){
        printf("%d",a[i]);

    }printf("the reverse is:%d");
    return 0;
}