#include <stdio.h>

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if (n<0)
    {
    printf("Negative number.\n");
    }
    else printf("Non-negative number.");
    
    return 0;
}