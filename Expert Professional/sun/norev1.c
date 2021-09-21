#include<stdio.h>		              
int main()
{
	int n,r;
	printf("Enter an Integer\t");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		n=n/10;
		printf("%d\t",r);
	}
	return 0;
}

/*
n=1005
r=5 
n=100
r=0
n=10
r=0
n=1
r=1
n=0
*/
