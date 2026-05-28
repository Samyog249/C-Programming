#include<stdio.h>
long power(int,int );
int main()
{
	int b,n;
	long p;
	printf("Enter value of b and n: ");
	scanf("%d %d",&b,&n);
	p = power(b,n);
	printf("Power = %d",p);
	return 0;
}
long power(int b,int n)
{
	if(n==0)
	return 1;
	else 
	return b* power(b,n-1);
}
