#include <stdio.h>
#include<string.h>
int main(){
    char name[20][20];
    char temp[20];
    int i,j;
    printf("Enter the name of 20 students:\n");
    for(i=0;i<20;i++){
        printf("%d: ",i+1);
        scanf("%s", name[i]);
    }
    for ( i = 0; i < 20; i++)
    {
    for ( j = 0; j < 20; j++)
    {
        if (strcmp(name[j], name[j+1])>0)
        {
            strcpy(temp,name[j]);
            strcpy(name[j],name[j+1]);
            strcpy(name[j+1],temp);
        }
        
    }
    
    }
    printf("\nNames in Alphabetical order:\n");
    for ( i = 0; i < 20; i++)
    {
        printf("%s\n",name[i]);
    }
    
    return 0;
}