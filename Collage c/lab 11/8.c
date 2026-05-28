#include<stdio.h>
int main(){
    FILE *fp_temp;
    FILE *fp_in, *fp_out;
    int n,num, sum =0, count=0;
    float avg;

    fp_temp = fopen("values.dat","w");
    if (fp_temp == NULL)
    {
    printf("Error creating values.dat\n");
    return 1;
    }
    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
    scanf("%d", &num);
    fprintf(fp_temp,"%d ",num);
    fclose(fp_temp);
    }
    
    fp_in = fopen("values.dat","r");
    if(fp_in == NULL){
        printf("Error: Cannot open value.dat\n");
        return 1;
    }
    printf("Numbers in file:\n");

    while (fscanf(fp_in,"%d",&num)!=EOF)
    {
        printf("%d\n",num);
        sum += num;
        count ++;
    }
    fclose(fp_in);
    if (count==0)
    {
        printf("No numbers found in file!\n");
        return 1;
    }
    avg = (float)sum/ count;
    printf("\nAverage =%.2f\n",avg);
    fp_out =fopen("average.dat", "w");

    if(fp_out==NULL){
        printf("Error: Cannot create average.dat\n");
    }
        fprintf(fp_out,"Average of number = %.2f\n",avg);
        fclose(fp_out);
        printf("Average stored in average.dat successfully!\n");
        return 0;
    
}