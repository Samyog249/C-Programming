#include<stdio.h>
int main(){
	int a= 10;
	int b= 30;
	int c;
	printf("The value of a is %d.\n",a);
	printf("The value of b is %d.\n ",b);
	c = a ;
	a = b;
	b = c;
	
	 
	 printf("After swaping the value of a is %d\n",a);
	 printf("After swaping the value of b is %d",b);
	
	return 0;
}
