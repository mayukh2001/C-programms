#include<stdio.h>
int main()
{
	/*
	take 
	2 nos and
	print sum
	*/
	int n1, n2,s;	//Variables
	printf("Enter 2 Integers:\t");
	scanf("%d%d",&n1,&n2);
	/*Find the sum*/
	s=n1+n2;
	printf("\n%d+%d=%d",n1,n2,s);
	return 0;
}
