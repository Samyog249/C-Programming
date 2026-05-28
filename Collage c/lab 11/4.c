#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    fp = fopen("employee.txt", "r");
    if(fp == NULL){
        printf("File is mnot found or cannot be opened:\n");
        return 1;
    }
    printf("Contents of file:\n\n");
    while ((ch=fgetc(fp))!=EOF)
    {
        putchar(ch);
    }
    fclose(fp);
    return 0;
}