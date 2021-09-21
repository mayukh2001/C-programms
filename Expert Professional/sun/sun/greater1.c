#include<stdio.h>
int main()
{
	int n1,n2;	
	printf("Enter 1st No\t");
	scanf("%d",&n1);
	fflush(stdin);
	printf("Enter 2nd No\t");
	scanf("%d",&n2);
	if(n1>n2)
	{
		printf("1st Number is Greater than 2nd No");
	}
	else
	{
		if(n1<n2)
		 printf("2nd Number is Greater than 1st No");
		else
		 printf("Numbers are Equal") ;
	}
	return 0;
}
