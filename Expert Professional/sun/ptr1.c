#include<stdio.h>
int main()
{
	int a, *p;
	p=&a;
	printf("Enter an Integer:\t");
	scanf("%d",p);			//scanf("%d",&a);
	a=a+10;
	printf("\nCurrent Value : %d",a);
	return 0;
}
