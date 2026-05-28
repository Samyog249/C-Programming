#include <stdio.h>

int main()
{
	int  a, b;
	char op;
	
	printf("Enter any two numbers with operator : ");
	scanf("%d %c %d", &a, &op, &b);
	
	switch (op)
	{ 
	case '+':
		printf("Result = %d",a + b);
		break ;
		case '-':
			printf("Result = %d",a - b);
			break ;
			case '*':
				printf("Result = %d",a * b);
				break ;
				case'%':
				printf("result = %d", a%b);
				break;
				case '/':
					if (b != 0)
					printf("Result = %d",a / b);
					else 
					printf("Division by zero error!");
					break ; 
					
					default :
					printf("Invalid operator!");
	}
	return 0;
}
