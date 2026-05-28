#include <stdio.h>
int sumArray(int a[]){
    int sum = 0;
    for(int i = 0; i < 10; i++) {
	sum += a[i];
	}
    return sum;
}
int main(){
    int arr[10];
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    int result = sumArray(arr);
    printf("Sum of array elements=%d\n",result);
    return 0;
}
