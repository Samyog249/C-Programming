#include<stdio.h>
int main(){
    int m =2,n=2,i;
    int mat1[2][2]={{1,2},{2,4}};
    int mat2[2][2]={{5,6},{7,8}};
    int sum[2][2];
    int *p1= &mat1[0][0];
    int *p2= &mat2[0][0];
    int *pSum = &sum[0][0];

    printf("Sum of matrices:\n");
    for(i=0;i < m*n;i++){
        *(pSum +i)=*(p1+i) +*(p2+i);
        printf("%d\t", *(pSum+i));
        if((i+1) %n ==0)
        printf("\n");
    }
    return 0;
}