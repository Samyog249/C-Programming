#include<stdio.h>
long int add(int n){
	if(n==0)
	return 0;
	else
	return (n+add(n-1));
}
int main(){
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	printf("The sum of first %d netural number is %ld",num,add(num));
	return 0;
}
