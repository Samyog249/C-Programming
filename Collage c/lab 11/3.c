#include<stdio.h>
int main(){
    FILE *fp;
    int i, num;
    fp = fopen("data.txt", "w");
    if(fp == NULL){
        printf("Error opening file!\n");
        return 1;
    }
    printf("Writing number 1 to 5 into file..\n");
    for(i=0;i<=5;i++){
        fprintf(fp,"%d\n",i);
    }
    fclose(fp);
    fp= fopen("data.txt","r");
    if(fp==NULL){
        printf("Error opening file!\n");
        return 1;
    }
    fseek(fp,2*sizeof(char),SEEK_SET);
    printf("\nReading from middle user fseek():\n");
    while (fscanf(fp,"%d",&num)!=EOF)
    {
        printf("%d ",num);
    }
    rewind(fp);
    printf("\n\nReading from beginning using rewind():\n");
    while (fscanf(fp, "%d",&num)!=EOF)
    {
        printf("%d ",num);
    }
    fclose(fp);
    return 0;
}