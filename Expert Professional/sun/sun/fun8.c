// Sum= 1/1! + 1/2! + 1/3! + .....+1/n!
#include<stdio.h>
long fact(int);
int main()
{
	int i,n;double r=0.0;
	printf("Enter an Integer\t");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	  r= r + 1.0/fact(i);
		
	printf("%f",r);
	return 0;
}
long fact(int n)
{
	long f;
	for(f=1;n>=1;n--)
	 f=f*n;
	return f; 
}


