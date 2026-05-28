#include<stdio.h>
int main(){
    FILE *fp;
    FILE *destination;
    char ch;
    fp = fopen("employee.txt","r");
    if( fp == NULL){
        printf("Error: employee file not found!\n");
        return 1;
    }
    destination = fopen("destination.txt","w");
    if(destination == NULL){
        printf("Error: Cannot create distination file!\n");
        fclose(fp);
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        fputc(ch,destination);
    }
    printf("File copied succesfully!\n");
    fclose(fp);
    fclose(destination);
    return 0;
}