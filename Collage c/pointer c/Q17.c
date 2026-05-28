#include <stdio.h>

int main(){
    int n, *p;
    *p = n;
    printf("Enter the n:");
    scanf("%d",&n);
    if (*p%2==0)
    {
    printf("The number is even");
    }
    else printf("The number is odd");

    return 0;
}