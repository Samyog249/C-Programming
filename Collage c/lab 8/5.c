#include <stdio.h>
#include <string.h>
#include <conio.h>
int main(){
    int i, j;
    char name[20][10], temp[50];
    printf("Enter 10 names:\n");
    for (  i = 0; i <10; i++)
    scanf("%s", name[i]);
    for ( i = 0; i < 9; i++)
    {
    for ( j = i+1; j < 10; j++)
    {
        if (strcmp(name[i], name[j]) > 0)
        {
            strcpy(temp, name[i]);
            strcpy(name[i], name[j]);
            strcpy(name[j], temp);
        }
    }
    }
    printf("Names in alphabetical order:\n");
    for ( i = 0; i < 10; i++)
    puts(name[i]);
    return 0;
}