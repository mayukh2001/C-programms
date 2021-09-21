#include<stdio.h>
int sum ()
{
	int n1,n2, s;
	printf("Enter an Integer:\t");
	scanf("%d",&n1);
	printf("Enter another Integer:\t");
	scanf("%d",&n2);
	s=n1+n2;
	return s;
}
int main()
{
	int r;
	r=sum();
	printf("Sum : %d",r);
	r=sum();
	printf("\nSum : %d",r);
	return 0;
}
