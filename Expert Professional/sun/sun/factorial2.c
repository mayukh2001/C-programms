#include<stdio.h>
int main()
{
	int i,n;
	long f;
	printf("Enter an Integer\t");
	scanf("%d",&n);
	for(i=1,f=1;i<=n; i++)
	{
	 f*=i;
	printf("%d! = %ld\n",i,f);
    }
	return 0;
}
