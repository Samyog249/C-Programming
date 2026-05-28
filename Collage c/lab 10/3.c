#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
    char remark[50];
};
int main()
{
    struct student s[2];
    int i;
    for (i = 0; i < 2; i++)
    {
        printf("Enter the detail of %d student:\n", i + 1);
        printf("Name:");
        scanf(" %[^\n]", s[i].name);
        printf("Roll no:");
        scanf("%d", &s[i].roll);
        printf("Marks:");
        scanf("%f", &s[i].marks);
        printf("Remark:");
        scanf(" %[^\n]", s[i].remark);

    }
    printf("\n---Details of Student---\n");
    for (i = 0; i < 2; i++)
    {
        printf("Name:%s\n", s[i].name);
        printf("Roll no:%d\n",s[i].roll);
        printf("Marks:%.2f\n",s[i].marks);
        printf("Remark:%s",s[i].remark);
    }
    return 0;
}