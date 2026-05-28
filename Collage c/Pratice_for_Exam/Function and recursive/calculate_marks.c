#include <stdio.h>
long add(int );
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("The sum of %d is %ld",num,add(num));
    return 0;
    }
long add(int n){
    if (n==0)
    return 0;
    return (n+add(n-1));
}