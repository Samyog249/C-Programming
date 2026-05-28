#include <stdio.h>
int main () {
	float p ,t ,r,si;
	printf("Enter P ,T , R: ");
	scanf("%f,%f,%f", &p,&t,&r);
	si = (p*t*r)/100;
	printf("Simple Interest = %f",si);
	return 0;
}
