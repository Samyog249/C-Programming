#include <stdio.h>

int main()
{
    int a[10], *p = a, i, j, temp;
    printf("Enter the 10 number:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < 10; i++)
        for (j = i + 1; j < 10; j++)
            if (*(p + i) > *(p + j))
            {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
    printf("The shorted value is:\n");
    for (i = 0; i < 10; i++)
        printf(" %d ", *(p + i));

    return 0;
}