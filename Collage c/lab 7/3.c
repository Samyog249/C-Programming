#include <stdio.h>
void searchitem(int arr[],int size,int item){
    for ( int i = 0; i < size; i++)
    {
        if(arr[i] == item) {
            printf("Item found at index %d\n", i);
            return;
        }
    }
    printf("Item not found\n");
}
int main(){
    int arr[5]= {10,20,30,40,50};
    searchitem(arr,5,30);
    return 0;
}