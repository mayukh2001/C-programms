#include<stdio.h>		              
int main()
{
	long n,rv=0; int r;
	printf("Enter an Integer\t");
	scanf("%ld",&n);
	while(n>0)
	{
		r=n%10;
		n=n/10;
	    rv=rv*10 + r;
	}
	printf("%ld",rv);
	return 0;
}

/*
n=123
   r=3
         s 3*10=30
  n=12 
        r=2
        s +r    32
        32 *10   320
    n=1
	  r=1         s+r 321
	 n=0    
*/
