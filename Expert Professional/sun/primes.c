#include<stdio.h>		              
int main()
{
	int n,i,j,flag=1;
	printf("Enter an Integer\t");
	scanf("%ld",&n);
	for(j=1;j<=n;j++)
	{
	  for(i=2, flag=1;i<=j/2;i++)
      	{
		if(j%i ==0)
		{
		   flag=0;
		   break;
	    }	    
       }
     if(flag)
       printf("%d\t",j);
   }
   return 0;
  }
