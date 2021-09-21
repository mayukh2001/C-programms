#include<stdio.h>		              
int main()
{
	long n,a=0,temp; int r;
	printf("Enter an Integer\t");
	scanf("%ld",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		n=n/10;
	    a=a + r*r*r;
	}
if (a==temp)
 printf("No is Armstrong No");
else
  printf("No is Not Armstrong no");
 	return 0;
}
