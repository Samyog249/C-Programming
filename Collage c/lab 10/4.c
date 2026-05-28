#include<stdio.h>
struct student{
    char name[50];
    int roll;
    char address[50];
    float marks;
};
int main(){
    struct student s[3];
    int i;
     for (i = 0; i < 3; i++)
    {
        printf("Enter the detail of %d student:\n", i + 1);
        printf("Name:");
        scanf(" %[^\n]", s[i].name);
        printf("Roll no:");
        scanf("%d", &s[i].roll);
        printf("Address:");
        scanf(" %[^\n]",s[i].address);
        printf("Marks:");
        scanf("%f", &s[i].marks);
}
 printf("\n---Details of Student Who have Obtained Greater Then 250 marks---\n");
    for (i = 0; i < 3; i++)
    {if (s[i].marks>250)
    {
        printf("Name:%s\n", s[i].name);
        printf("Roll no:%d\n",s[i].roll);
        printf("Address:%s",s[i].address);
        printf("Marks:%.2f\n",s[i].marks);
    }
    }
    return 0;
}
