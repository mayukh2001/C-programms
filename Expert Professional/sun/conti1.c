#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter an Integer\t");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(i%2==0)
		  continue;
		printf("%d\t",i)  ;
	}
	return 0;
}
