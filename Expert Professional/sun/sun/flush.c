#include<stdio.h>
int main()
{
	int a;
	char c;
	printf("Enter an Integer:\t");
	scanf("%d",&a);
	fflush(stdin);
	printf("\nEnter a Character:\t");
	scanf("%c",&c);
	printf("\nInteger %d and Character %c",a,c);
	printf("\n%u,  %u",&a, &c);
	return 0;
}

