#include<stdio.h>
int main()
{
	int n;
	printf("Enter an Integer :\t");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("No %d is Even",n);
	}
	else
	 	printf("No %d is Odd",n);
	return 0;	 	
}
