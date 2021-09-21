#include<stdio.h>		              
int main()
{
	long n,rv=0,temp; int r;
	printf("Enter an Integer\t");
	scanf("%ld",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		n=n/10;
	    rv=rv*10 + r;
	}
if (rv==temp)
 printf("No is Palindrome");
else
  printf("No is Not Palindrome");
 	return 0;
}
