#include<stdio.h>
int isPrime(int);
int main()
{
	int n,r;
	printf("Enter an Integer\t");
	scanf("%d",&n);
	//r=isPrime(n);
	if(isPrime(n))
	 printf("\nNo is Prime");
	 else
	 printf("\nNo is not Prime");
}

int isPrime(int n)
{
	int i, flag=1;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}
	return flag;
	
	}
