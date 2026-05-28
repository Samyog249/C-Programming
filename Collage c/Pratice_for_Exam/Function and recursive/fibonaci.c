#include <stdio.h>
int fibo(int n);
int main(){
int i,n;
printf("Enter n: ");
scanf("%d",&n);
printf("\nThe fibo of %d is:\n",n);
for ( i = 0; i < n; i++)
{
printf("%d\t",fibo(i));
}
    return 0;
}
int fibo(int n){
    if (n==0)
    return 0;
    if(n==1)
    return 1;
    else
    return fibo(n-1) +fibo(n-2);
    
}