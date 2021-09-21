// Sum= 1! + 2! + 3! + .....+n!
#include<stdio.h>
long fact(int);
int main()
{
	int i,n;long r;
	printf("Enter an Integer\t");
	scanf("%d",&n);
	for(i=1, r=0;i<=n;i++)
	  r= r + fact(i);
		
	printf("%ld",r);
	return 0;
}
long fact(int n)
{
	long f;
	for(f=1;n>=1;n--)
	 f=f*n;
	return f; 
}


