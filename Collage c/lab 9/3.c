#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr,*ptr2;
    int n,i, new_size;
    printf("Enter number of elements for malloc: ");
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));
    if(ptr==NULL){
        printf("memory allocation failed!\n");
        return 1;
    }
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d", &ptr[i]);
    }
    printf("Values using malloc:\n");
    for(i=0;i<n;i++){
        printf("%d ",ptr[i]);
    }
    printf("\n\nEnter number for calloc: ");
    scanf("%d", &n);
    ptr2 = (int*) calloc(n, sizeof(int));
    if(ptr2==NULL){
        printf("memory allocation failed!\n");
        return 1;
    }
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d", &ptr2[i]);
    }
    printf("Value using malloc:\n");
    for(i=0;i<n;i++){
        printf("%d ",ptr2[i]);
    }
    printf("\n\nEnter new size for realloc: ");
    scanf("%d", &new_size);
    ptr = (int*) realloc(ptr, new_size*sizeof(int));
    if(ptr==NULL){
        printf("Reallocation failed!\n");
        return 1;
    }
    printf("Enter %d new elements:\n", new_size-n);
    for(i=n;i<new_size;i++){
        scanf("%d", &ptr[i]);
    }
    printf("values after realloc:\n");
    for(i=0;i<new_size;i++){
        printf("%d ",ptr[i]);
    }
    free(ptr);
    free(ptr2);

    printf("\n\nMemory deallocated successfully.\n");
return 0;
}