#include<stdio.h>
#include<string.h>
struct Book
{
int isbn;
char title[50];
char author[50];
float price;
};

int main(){
    int i;
    struct Book bo[5];
    int i;
    printf("Enter the Detail of book:\n");
    for ( i = 0; i < 5; i++)
    {
        printf("Enter %d book:",i+1);
    printf("Enter ISBN:");
    scanf("%d",&bo[i].isbn);
    printf("Enter title:");
    scanf(" %[^\n]",bo[i].title);
    printf("Enter Author:");
    scanf(" %[^\n]",bo[i].author);
    printf("Enter Price:");
    printf("%f",&bo[i].price);
    }
    
    printf(for (
 i = 0; i < count; i++)
    {
        /* code */
    }
    )

}