#include <stdio.h>
int main(){
	int i,j,spc,rows;
	printf("Enter the rows of a given no");
	scanf("%d", & rows);
	for (i=1; i<=rows;i++)
	{ for (spc=1; spc  <=rows-i; spc++)
	{printf(" ");
	}
	for(j=1;j <=2*i-1;j++)
	printf(" ");
	}
	printf("\n");
	return 0;
}
