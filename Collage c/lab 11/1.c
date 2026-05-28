#include<stdio.h>
int main(){
    FILE *fp;
    char name[50];
    char address[100];
    int id;
    float salary;
    fp = fopen("employee.txt", "w");
    if(fp== NULL){
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter Employee Name: ");
    scanf(" %[^\n]",name);
    printf("Enter Employee ID: ");
    scanf("%d",&id);
    printf("Enter Employee Address: ");
    scanf(" %[^\n]",address);
    printf("Enter Employee Salary: ");
    scanf("%f",&salary);

    fprintf(fp, "Employee Details:\n");
    fprintf(fp, "Name: %s\n",name);
    fprintf(fp, "ID: %d\n",id);
    fprintf(fp, "Address: %s\n",address);
    fprintf(fp, "Salary: %.2f\n",salary);
  fclose(fp);
  printf("Data written successfully to employee.txt\n");

  return 0;
    
}