#include <stdio.h>

int main(){
    int A[3][3], B[3][3],C[3][3],i,j;
    printf("Enter matrix 1:\n");
    for ( i = 0; i < 3; i++)
    for ( j = 0; j < 3; j++)
scanf("%d",&A[i][j]);
printf("Enter matrix 2:\n");
for ( i = 0; i < 3; i++)
for ( j = 0; j < 3; j++)
scanf("%d",&B[i][j]);
for ( i = 0; i < 3; i++)
for ( j = 0; j < 3; j++)
 C[i][j] = A[i][j] + B[i][j];
 printf("Result:\n");
 for ( i = 0; i < 3; i++)
 {
    for (j = 0; j < 3; j++)
    {
        printf("%d ", C[i][j]);
    }
    printf("\n");
 }
 
    return 0;
}