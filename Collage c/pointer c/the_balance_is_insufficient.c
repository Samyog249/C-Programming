#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 200
#define TRUE 1
struct account{
    int acct_no;
    char name[20];
    float balance;
};
int count = 0 , i;
int main(){
    struct account customer[N];
    void displa (struct account customer[]);
    int choice, acct_no;
    char name[20];
    float amount;
    printf("1. Deposite\n");
    printf("2. Withdrawl\n");
    printf("3. Create account\n");
    printf("4. Customer with balance below RS. 100\n");
    printf("5. Exit\n");
    while (TRUE)
    {
    printf("Enter a choice:");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter account number:");
        scanf("%d", &acct_no);
        printf("Enter name:");
        scanf("%s", name);
        for ( i = 0; i < count; i++)
        {
        if ((customer[i].acct_no == acct_no) && (strcmp(customer[i].name,name)==0))
        {
        printf("Enter amount to deposit:");
        scanf("%f", &amount);
        customer[i].balance = customer[i].balance + amount;
        break;
        }
        }
        if(i== count)printf("No match found\n");
        break;
    case 2:
    printf("Enter account number:");
    scanf("%d", &acct_no);
    printf("Enter name:");
    scanf("%s",name);
    for(i=0; i < count; i++){
        if((customer[i].acct_no == acct_no) && (strcmp(customer[i].name, name)==0)){
            printf("Enter withdrawl ammount:");
            scanf("%f",&amount);
            if ((customer[i].balance - amount) > 0)
            {
            customer[i].balance -= customer[i].balance;
            } else printf("The balance is insuffucient\n");
            break;
        }
    }
    if (i== count)
    printf("No match found\n");
    break;
    case 3:
    printf("Enter account number:");
    scanf("%d",&customer[count].acct_no);
    printf("Enter name:");
    scanf("%s", customer[count].name);
    printf("Enter balance:");
    scanf("%f", &customer[count].balance);
    count++;
    break;
    case 4:
    display(customer);
    break;
    case 5:
    exit(0);
    default:
    printf("Wrong choice!Try again\n");
    }
    }  
    return 0;
}
void display(struct account customer[N]){
    printf("\nCustomers with balance below RS. 100:\n");
    for(i=0;i< count; i++){
        if (customer[i].balance < 100)
        {
        printf("Account number:%d\n", customer[i].acct_no);
        printf("Name: %s\n",customer[i].name);
        }
    }
}