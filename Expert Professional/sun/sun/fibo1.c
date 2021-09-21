// 0 1 1 2 3 5 8 
#include<stdio.h>
int main()
{
	int n, i, t1=0, t2=1, t3=0;
	printf("Enter no of terms required :\t");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",t3);
		t1=t2;
		t2=t3;
		t3=t1+t2;
	}
return 0;	
}


