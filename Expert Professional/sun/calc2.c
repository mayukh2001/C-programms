#include<stdio.h>
int main()
{
	float n1,n2;
	char op;
	printf("Enter a Number:\t");
	scanf("%f",&n1);
	fflush(stdin);
	printf("\"Enter Operator:\"\t");
	scanf("%c",&op);
	fflush(stdin);
	printf("Enter another Number:\t");
	scanf("%f",&n2);
	switch(op)
	{
		case '+':
			printf("%f",n1+n2);
			break;
		case '-':
			printf("%f",n1-n2);
			break;
		case '*':
		case 'x':
		case 'X':
			printf("%f",n1*n2);
			break;
		case '/':
		case '\\':
			printf("%f",n1/n2);
			break;
		default:
			printf("Invalid Operator");
	}
	return 0;
}
