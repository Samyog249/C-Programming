#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a, b;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    sum(a, b);
    return 0;
}
int sum(int a, int b)
{
    printf("The sum of %d and %d is %d\n", a,b,a+b);
    printf("The sub of %d and %d is %d\n", a, b,a-b);
    printf("The mul of %d and %d is %d\n", a, b,a*b);
    printf("The div of %d and %d is %d", a, b,a/b);
}