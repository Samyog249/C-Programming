 #include <stdio.h>
 #include <string.h>
 struct employee
 {
 char name[50];
 char address[100];
 float salary;
 };
 
 int main(){
    struct employee emp[5],temp;
    int i,j;
    for(i=0;i<5;i++){
        printf("Enter the details of employe:%d\n",i+1);
        printf("Name: ");
        scanf(" %[^\n]",emp[i].name);
        printf("Address: ");
        scanf(" %[^\n]",emp[i].address);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }
    for(i=0;i<4;i++){
        for(j=i+1;j<5;j++){
            if(strcmp(emp[i].name,emp[j].name)>0)
            {
                temp=emp[i];
                emp[i]=emp[j];
                emp[j]=temp;
            }
        }
    }
    printf("\n---Employe details after shorting---\n");
    for(i=0;i<5;i++){
        printf("Employe details:%d",i+1);
        printf("Name:%s\n",emp[i].name);
        printf("Address:%s\n",emp[i].address);
        printf("Salary:%.2f\n",emp[i].salary);
    }
    return 0;
 } 