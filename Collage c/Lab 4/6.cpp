#include<stdio.h>
int add(){
	int a  ,b;
	printf("Enter two number: ");
	scanf("%d %d",&a,&b);
	return a + b;
}
int main(){
	int sum;
	sum=add();
	printf("The Sum of two number is:%d\n",sum);
	return 0;
}
