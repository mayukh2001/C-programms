#include<stdio.h>
int main()
{
	int i,n, flag=1;
	printf("Enter an Integer:\t");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i ==0)
		{
		   flag=0;  
	    }
    }
	
	if(flag==1)	
	 printf("\nPrime");
	else
	  printf("\nNot Prime");
	  
	return 0;
}
