#include <stdio.h>
int n,i ;
printf("Enter the array element ");
scanf("%d", &n);
int arr[n];
printf("Enter elements \n");
for (i=0;i<n;i++){
    scanf("%d", &arr[i]);
}
int max = arr[0];
int min = arr[0];
for (i=1;i<n;i++){
    if (arr[i]>max)
    { max = arr[i];
    }
    if(arr[i]<min)
    {
        min = arr[i];
    
    }
    printf("maximum = %d\n",max);
    printf("minimum = %d\n",min);
    return 0;
}