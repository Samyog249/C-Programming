#include<stdio.h>
int main()
{
int num1=2, num2=200,num3=45;
if(num1>num2 && num1>num3)
	printf("The greater number is %d",num1);
	else if (num2>num1 && num2>num3)
	printf("num2 is greater then num1 and num3:%d",num2);
	else
	printf("Num3 is greater then num1 and num2:%d",num3);



return 0;
}

