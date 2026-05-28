#include <stdio.h>
#include <string.h>
#define NUM 3
int main(){
    struct dob
    {
        int dd;
        int mm;
        int yy;
    };
    struct student
    {
        int roll_no;
        char name[20];
        char faculty[10];
        struct dob date_of_birth;
    };
    struct student s[NUM];
    int i;
    for (i = 0; i < NUM; i++)
    {   
        printf("Enter data for student:%d\n",i+1);
        printf("Name:");
        scanf("%s",s[i].name);
        printf("Roll no:");
        scanf("%d",&s[i].roll_no);
        printf("Faculty:");
        scanf("%s",s[i].faculty);
        printf("Day:");
        scanf("%d",&s[i].date_of_birth.dd);
        printf("Month:");
        scanf("%d",&s[i].date_of_birth.mm);
        printf("Year:");
        scanf("%d",&s[i].date_of_birth.yy);
    }
    printf("\n Student's Of CSIT:\n");
    for (i = 0; i < NUM; i++)
    {
    if (strcpy(s[i].faculty,"BCA")==0);
    {
    printf("Roll no:%d\n",s[i].roll_no);
    printf("Name:%s\n",s[i].name);
    printf("Faculty:%s\n",s[i].faculty);
    printf("Day:%d\n",s[i].date_of_birth.dd);
    printf("Month:%s\n",s[i].date_of_birth.mm);
    printf("Year:%d\n",s[i].date_of_birth.yy);
    }
    
    }
    
        return 0;
}