#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the three number: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("\n%d is the largest number.", a);
        }
        else
        {
            printf("\n%d is the largest number.", c);
        }
        }
else{
    if (b>c)
    {
        printf("\n%d is the largest number.",b);
    }
    else{
        printf("\n%d is the largest number.",c);
    }
}
    return 0;
}