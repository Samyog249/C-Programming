#include<stdio.h>
struct student{
    char name[50];
    int roll;
};
void display(struct student s){
    printf("%s %d",s.name,s.roll);
}
int main(){
    struct student s={"Ram",1};
    display(s);
    return 0;
}