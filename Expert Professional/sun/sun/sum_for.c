#include<stdio.h>
int main()
{
	int i, s, n;
	printf("Enter Limit\t");
	scanf("%d",&n);
	/*
	for(i=1,s=0; i<=n;i++)
	 s+=i;
	 */
	for(i=1,s=0; i<=n; s+=i,i++);
	 
	printf("%d",s) ;
	return 0;
}
