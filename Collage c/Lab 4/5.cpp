#include<stdio.h>
void val(int x){
	x=10;
}
void ref(int *x){
	*x=100;
}
int main(){
	int a=10,b=10;
	val(a);
	ref(&b);
	printf("Call by value is: %d\n", a);
	printf("Call by reference is: %d\n",b);
	return 0;
}
