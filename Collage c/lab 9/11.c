#include <stdio.h>
void swap(int **ptr1, int **ptr2){
    int *temp = *ptr1;
    *ptr1= *ptr2;
    *ptr2= temp;
}
int main(){
    int a = 10, b=20;
    int *p1= &a, *p2=&b;
    printf("Before Swap: p1 points to value %d,p2 points value %d\n",*p1,*p2);
    swap(&p1,&p2);
     printf("After Swap: p1 points to value %d,p2 points value %d\n",*p1,*p2);
    return 0;
}