#include <stdio.h>

int main(){
    int i,arr[100],n, largest,smallest;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
     scanf("%d", &arr[i]);
     smallest = largest = arr[0];
     for (i = 1; i < n; i++){
        if (arr[i]>largest)largest = arr[i];
        else if (arr[i]<smallest)smallest = arr[i];
     }
    printf("Largest element is: %d\n", largest);
    printf("Smallest element is: %d", smallest);
    return 0;
}