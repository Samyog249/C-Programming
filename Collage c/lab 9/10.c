#include <stdio.h>

int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int *ptr = &arr[0][0];
int row=3,cols= 3,i;
printf("2D Array elements:\n");
for(i=0;i< row *cols;i++){
    printf("%d\t", *(ptr+i));
    if((i+1)% cols ==0)
    printf("\n");
}

    return 0;
}