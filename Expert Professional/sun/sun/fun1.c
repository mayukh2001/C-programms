#include<stdio.h>
void sum ()
{
	int n1,n2, s;
	printf("Enter an Integer:\t");
	scanf("%d",&n1);
	printf("Enter another Integer:\t");
	scanf("%d",&n2);
	s=n1+n2;
	printf("%d + %d = %d\n",n1,n2,s);
}
int main()
{
	sum();
	sum();
	return 0;
}
