#include<stdio.h>
int sum (int n1, int n2)
{
    int s;
	s=n1+n2;
	return s;
}
int main()
{
	int a,b, r;
	printf("Enter an Integer:\t");
	scanf("%d",&a);
	printf("Enter another Integer:\t");
	scanf("%d",&b);
	r=sum(a,b);
	printf("Sum : %d",r);	
	return 0;
}
