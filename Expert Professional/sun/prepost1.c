#include<stdio.h>
int main()
{
	int a,b;
	printf ("enter an Integer\t");
	scanf("%d",&a);
	//++a;
	//++a;
	printf("\nCurrent value %d",a++);
	printf("\nValue %d",a);
	printf("\nEnter another Integer\t");
	scanf("%d",&b);
	printf("\nCurrent value %d",++b);
	printf("\nValue %d",b);
}
