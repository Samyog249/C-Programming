#include <stdio.h>

int main(){
    int a[3][3],trans[3][3],i,j;
    printf("Enter Matrix:\n");
    for ( i = 0; i < 3; i++)
    for ( j = 0; j < 3; j++)
    scanf("%d", &a[i][j]);
        printf("Transpose of the matrix is:\n");
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            trans[i][j] = a[j][i];
            printf("%d ", trans[i][j]);
    }
    printf("\n");}
    
    
    return 0;
}