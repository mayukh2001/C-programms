#include<stdio.h>
#include<math.h>
int main()
{
	int i,n, flag=1, sq;
	printf("Enter an Integer:\t");
	scanf("%d",&n);
	sq=sqrt(n);
	for(i=2;i<=sq;i++)
	{
		if(n%i ==0)
		{
		   flag=0;
		   break;
	    }
    }
	
	if(flag)		//if(flag==1)	
	 printf("\nPrime");
	else
	  printf("\nNot Prime");
	  
	return 0;
}

