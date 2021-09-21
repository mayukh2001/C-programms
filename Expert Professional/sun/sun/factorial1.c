#include<stdio.h>
int main()
{
	int i,n;
	long f;
	printf("Enter an Integer\t");
	scanf("%d",&n);
	for(i=1,f=1;i<=n; f*=i,i++);
	printf("%d! = %ld",n,f);
	return 0;
}
