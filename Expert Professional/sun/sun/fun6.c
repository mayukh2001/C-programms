#include<stdio.h>
long fact(int);
int main()
{
	int n;long r;
	printf("Enter an Integer\t");
	scanf("%d",&n);
	r=fact(n);
	printf("%d! = %ld",n,r);
	return 0;
}
long fact(int n)
{
	long f;
	for(f=1;n>=1;n--)
	 f=f*n;
	return f; 
}


