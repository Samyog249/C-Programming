#include <stdio.h>

int main(){
    int mat[3][3],i,j;
    printf("Enter 3x3 matrix:\n");
    for ( i = 0; i < 3; i++)
     for ( j = 0; j < 3; j++)
     scanf("%d", &mat[i][j]);
     for ( i = 0; i < 3; i++){
int rsum = 0, csum = 0;
     for ( j = 0; j < 3; j++){
        rsum += mat[i][j];
        csum += mat[j][i];
     }
     printf("Sum of Row %d: %d\n", i+1, rsum);
     printf("Sum of Col %d: %d\n", i+1, csum);
    }
    return 0;
}