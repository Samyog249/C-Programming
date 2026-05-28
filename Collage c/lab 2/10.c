#include <stdio.h>

int main(){
    int n,i,a=1,b=1,c;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Fibonacci series:%d %d",a,b);
    for ( i = 3; i <=n; i++)
    {
    c = a+b;
    printf("%d ",c);
    a=b;
    b=c;
    }
    printf("\n7th term = ");
    a = 1; b=1;
    for ( i = 3; i <=7; i++)
    {
    c=a+b;
    a =b ;
    b=c;
    }
    printf("%d\n",b);
    
    return 0;
}