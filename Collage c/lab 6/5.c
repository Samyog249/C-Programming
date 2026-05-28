 #include <stdio.h>

int main(){
    int A[3][4],B[4][3],i,j;
    printf("Enter A:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter B:\n");
    for (i = 0; i < 4; i++)
    {
        scanf("%d",&B[i]);
    }   
    printf("Matrix multiplication B*A and A*B are generally Not equal\n");
    return 0;
}
