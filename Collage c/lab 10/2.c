#include<stdio.h>
struct address
{
char city[50];
};
struct student
{
    char name[50];
    struct address addr;
};
int main(){
    struct student s = {"Samyog",{"Kathmandu"}};
    printf("Name:%s\nCity:%s",s.name,s.addr.city);
    return 0;
}
