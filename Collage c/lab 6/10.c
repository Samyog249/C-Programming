#include <stdio.h>

int main(){
    int n,i;
    float sum=0.0, average;
    printf("Enter the numbers of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for ( i = 0; i < n; i++)
    {
    	printf("Elements %d: ",i+1);
    scanf("%d", &arr[i]);
}
for (i=0;i<n;i++){
	sum += arr[i];
}
average = sum /n;
printf("Sum=%.2f\n",sum);
    printf("Average = %2.f\n",average);
    return 0;
}
