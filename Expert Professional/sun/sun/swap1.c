#include<stdio.h>
int main()
{
	int n1,n2,temp;
	printf("Enter 2 Integers :");
	scanf("%d%d",&n1,&n2);
	printf("Values before Swapping %d and %d",n1,n2);
	temp=n1;
	n1=n2;
	n2=temp;
	printf("\nValues after Swapping %d and %d",n1,n2);
	return 0;	
}
