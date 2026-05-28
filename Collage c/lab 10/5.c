#include <stdio.h>
struct customer
{
    char name[50];
    int acc;
    float balance;
};

int main()
{
    struct customer c[3];
    int i;
    int max = 0;
    for (i = 0; i < 3; i++)
    {
        printf("Enter the detail of customer%d:\n", i + 1);
        printf("Name:");
        scanf(" %[^\n]", c[i].name);
        printf("Account no:");
        scanf("%d", &c[i].acc);
        printf("Balance:");
        scanf("%f", &c[i].balance);
    }
    for (i = 1; i < 3; i++)
    {
        if (c[i].balance > c[max].balance)
        {
            max = i;
        }
    }
    printf("\n\t------Highest balance-------\n");
    printf("Name:%s\n", c[max].name);
    printf("Account no:%d\n ", c[max].acc);
    printf("Balance:%.2f", c[max].balance);
    return 0;
}