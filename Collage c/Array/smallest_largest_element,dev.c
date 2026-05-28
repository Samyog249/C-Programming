#include<stdio.h>
int main()
{
int a[5],n,i , Small, Big;
printf("Enter a no:");
scanf("%d", &n);
for (i=0; i<n;i++)
{
	printf("Enter the %d elements:",i);
	scanf("%d", &a[i]);
}
Small = a[0];
Big = a[0];
for (i=1; i<n; i++)
{
	if (Small>a[i])
	Small=a[i];
	
	if (Big<a[i])
	Big=a[i];
}
printf("The Smallest element of an array = %d\n",Small);
printf("The Largest element of an array = %d\n",Big);
return 0;
}

