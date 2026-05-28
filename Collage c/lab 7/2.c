#include <stdio.h>

int min(int arr[], int n) {
    int i,m=arr[0];
    for(i=1;i<n;i++) {
        if(arr[i]<m) {
            m=arr[i];
        }
    } 
    return m;
}
int main(){
    int arr[10],i;
    printf("Enter 10 values:\n");
    for ( i = 0; i < 10; i++)
        scanf("%d",&arr[i]);
    printf("Minimum element is %d", min(arr, 10));
    return 0;
}