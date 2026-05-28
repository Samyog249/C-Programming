#include<stdio.h>
int main(){
    FILE *fodd, *feven;
    int i,num;
    fodd = fopen("odd.txt", "w");
    feven = fopen("even.txt", "w");
    if(fodd == NULL || feven == NULL){
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter 10 number:\n");
    for(i=0;i<10;i++){
        scanf("%d", &num);
        if(num % 2==0){
            fprintf(feven,"%d\n",num);
        } else {
            fprintf(fodd,"%d\n",num);
        }
    }
    fclose(fodd);
    fclose(feven);
    
    fodd = fopen("odd.txt", "r");
    if(fodd == NULL){
        printf("Error opening odd.txt for reading!\n");
        return 1;
    }
 printf("\nOdd numbers from file:\n");
 while (fscanf(fodd,"%d",&num) != EOF)
 {
    fprintf(fodd,"%d\n",num);
    fclose(fodd);
 }
   return 0;
}