#include<stdio.h>
struct employee
{
    int  id;
    char name[50];
    char address[50];
    float salary;
};
int main(){
    FILE *fp;
    struct employee e;
    fp =fopen("binary.dat","wb");
    if (fp == NULL)
    {
    printf("Error opening file for writing!\n");
    return 1;
    }
    printf("Enter Employee ID: ");
    scanf("%d",&e.id);
    printf("Enter Employee Name: ");
    scanf(" %[^\n]",e.name);
    printf("Enter Employee address: ");
    scanf(" %[^\n]",e.address);
    printf("Enter Employee Salary: ");
    scanf("%f",&e.salary);

    fwrite(&e, sizeof(e),1,fp);
    fclose(fp);
    printf("\nData written successfully to binary.dat\n\n");
    fp = fopen("binary.dat","rb");
    if(fp==NULL){
printf("Error opening file for reading!\n");
return 1;
    }
    printf("Reading data from binary file:\n\n");
    fread(&e,sizeof(e),1,fp);
    printf("Employee Details:\n");
    printf("ID: %d\n",e.id);
    printf("Name: %s\n",e.name);
    printf("Address: %s\n",e.address);
    printf("Salary: %.2f\n",e.salary);

    fclose(fp);
    return 0;
}