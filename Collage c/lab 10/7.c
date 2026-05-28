#include <stdio.h>
struct emp
{
    char name[50];
    char address[50];
    float salary;
    int id;
};
void input(struct emp e[],int n){
    for ( int i = 0; i < n; i++)
    {
    printf("Enter the detail of %d Employe:\n", i + 1);
        printf("Name:");
        scanf(" %[^\n]", e[i].name);
        printf("Address:");
        scanf(" %[^\n]", e[i].address);
        printf("Salary:");
        scanf("%f", &e[i].salary);
        printf("ID:");
        scanf("%d",&e[i].id);}}
        void display(struct emp e[], int n){
    printf("\n---Detail of Employee---\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\n", e[i].name);
        printf("Address: %s\n", e[i].address);
        printf("Salary: %.2f\n", e[i].salary);
        printf("ID: %d\n", e[i].id);
    }
}
int main(){
    struct emp e[2];
    input(e,2);
    display(e,2);
    return 0;
}
