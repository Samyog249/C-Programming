#include <stdio.h>
int main(){
    int i ,n,sum =0, arr[100];
    printf("Enter number of elements:");
    scanf("%d",&n);

for (i = 0; i < n; i++)
{
 scanf("%d", &arr[i]);
 sum += arr[i]; 
}
printf("Sum of the array is: %d",sum);
    return 0;
}
