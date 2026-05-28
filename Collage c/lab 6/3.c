#include <stdio.h>

int main(){
    int arr[50],n,i,key,found = 0;
 printf("Enter n: ");
 scanf("%d",&n);
 for (i = 0; i < n; i++)
 {
    scanf("%d",&arr[i]);
 }
 printf("Enter key to search");
 scanf("%d",&key);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            found = 1;
            break;
        }
    }
    if (found)
    {
        printf("found at position %d",i+1);
    }
    else
    {
        printf("Element not found");
    }
 
    return 0;
}
