//WAP TO COUNT EVEN AND ODD NOS OF ARRAY
#include<stdio.h>
int main()
{
    int n;
    printf("enter the no of elements of array:");
    scanf("%d", &n);
    int a[n], i, even=0, odd=0;
    printf("enter the elements of array:");
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++){
        
        if(a[i]%2 ==0){
            even = even +1;
            //printf("even no");
        }}
    for(int i=0; i<n; i++){
        if(a[i]%2 !=0){
            odd = odd+1;
            //printf("odd no");
        }
    }
    printf("odd elements:%d", odd);
    printf("even elements:%d", even);
    return 0;
}