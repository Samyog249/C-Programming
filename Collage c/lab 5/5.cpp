#include<stdio.h>
long double power(int,int);
long double power(int x,int n){
	int result = 1.0;
	int i;
	for(i=1;i<=n;i++)
	result *=x;
	return result;
}
int main(){
	int n,x ,res;
	printf("Enter the value of x: ");
	scanf("%d", &x);
	printf("Enter the value of n: ");
	scanf("%d",&n);
	res=power(x,n);
	printf("The %d to power %d is:%d\t ",x,n,res);
	return 0;
}
