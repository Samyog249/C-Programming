#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *odd_file, *even_file;
    int num, i;
    //Opening the files for writing
    odd_file = fopen("odd.txt", "w");
    if (odd_file == NULL)
    {
        printf("Error opening odd.txt\n");
        exit (1);
    }
    even_file = fopen("even.txt", "w");
    if (even_file == NULL)
    {
        printf("Error opening even.txt\n");
        fclose(odd_file);
        exit (1);   
    }
    printf("Enter 10 numbers:\n");
    for (i = 0; i <=9; i++)
    {
    printf("Number %d: ", i + 1);
    scanf("%d", &num);//
        if (num % 2 == 0)
        {
            fprintf(odd_file, "%d\n", num);
        }
        else
        {
            fprintf(even_file, "%d\n", num);
        }
    }
    fclose(odd_file);
    fclose(even_file);
    printf("Numbers have been written to odd.txt and even.txt successfully.\n");
    //Displaying the contents of odd.txt
    printf("\nOdd numbers in odd.txt:\n");
    odd_file = fopen("odd.txt", "r");
    if (odd_file == NULL)
    {
        printf("Error opening odd.txt\n");
        exit (1);
    }
    while (fscanf(odd_file, "%d", &num) == 1)
    {
        printf("%d\n", num);
    }
    fclose(odd_file);
    return 0;
}