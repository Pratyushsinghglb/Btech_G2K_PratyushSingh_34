#include <stdio.h>
int main(){
    int n, rev = 0, rem;
    printf("enter no ");
    scanf("%d", &n);
    while (n>0){
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n/10;
    
    
    }
    printf("reversed no = %d", rev);
    return 0;
}