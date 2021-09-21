#include<stdio.h>
int main()
{
	int i, n;
	printf("Enter an Integer:\t");
	scanf("%d",&n);
	if(n%2 != 0)
	 n--;
	printf("\nNext 3 Even Integers are :\n") ;
	for(i=1;i<=3;i++) 
	{
		n+=2;
		printf("%d\t",n);
	}
	return 0;
}
