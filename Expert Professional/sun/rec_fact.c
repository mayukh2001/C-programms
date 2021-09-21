#include<stdio.h>
long fact_r(int);
int main()
{
	int n;
	long r;
	printf("Enter an Integer :\t");
	scanf("%d",&n);
	r=fact_r(n);
	printf("\n%d! = %ld",n,r);
	return 0;
}

long fact_r(int n)
{
	if(n==0|| n==1)
	 return 1;
	else
	 return n * fact_r(n-1) ;	
}
