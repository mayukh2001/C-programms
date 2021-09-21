#include<stdio.h>
int sum(int ,int);
int main()
{
	int n1,n2, s;
	printf("Enter an Integer:\t");
	scanf("%d",&n1);
	printf("Enter another Integer:\t");
	scanf("%d",&n2);
	s=sum(n1,n2);
	printf("Sum : %d",s);	
	return 0;
}

int sum (int n1, int n2)
{
    int s;
	s=n1+n2;
	return s;
}
