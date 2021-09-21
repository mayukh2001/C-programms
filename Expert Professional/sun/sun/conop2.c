#include<stdio.h>
int main()
{
	int n1,n2,max;
	printf("Enter 2 Numbers:\t");
	scanf("%d%d",&n1,&n2);
	max=n1>n2? n1 : n2;
	printf("Max Value %d",max);
	return 0;
}
