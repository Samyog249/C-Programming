#include <stdio.h>
int i,j,c;
int main(){
    int a[3][4],b[3][4];
    void input(int a[][4]);
    void add(int a[][4], int b[][4]);
    printf("Input first matrix:\n");
    input(a);
    printf("Input second matrix:\n");
    input(b);
    printf("Addition matrix is:\n");
    add(a,b);
    return 0;
}void input(int a[][4]){
    for ( i = 0; i < 3; i++)
for ( i = 0; i < 4; i++)
scanf("%d", &a[i][j]);
}void add (int a[][4],int b[][4])
{
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; i++)
        {
            c =a [i] [j] + b[i][j];
            printf("%d\t",c);
        }
        printf("\n");
    }
    
}