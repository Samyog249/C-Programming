#include <stdio.h>

int main(){
    int arr[25],i,even = 0, odd= 0;
    printf("Enter 25 numbers: ");
    for ( i = 0; i < 25; i++)
    {
    scanf("%d", &arr[i]);
    if (arr[i] %2==0)
even++;
else odd++;
    }
    printf("Even number is:%d\nOdd number is:%d\n",even ,odd);
    
    return 0;
}