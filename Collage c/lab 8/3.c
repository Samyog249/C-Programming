#include <stdio.h>
#include <string.h>
int main(){
    char name [5][20], temp[20];
    int i , j;
    for ( i = 0; i < 5; i++)
    {
        printf("Enter name %d: ", i+1);
        scanf(" %[^\n]",name[i]);
    }
    for ( i = 0; i < 5; i++)
{for ( j = 0; j < 5; j++)
{
    if (strcmp(name[i], name[j]) < 0)
    {
        strcpy(temp, name[i]);
        strcpy(name[i], name[j]);
        strcpy(name[j], temp);
    }
}
    }
    printf("Sorted names:\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%s\n", name[i]);
    }
    return 0;
}