#include<stdio.h>
int main()
{
	float tmp[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter Value %d:\t",i+1);
		scanf("%f",&tmp[i]);
	}
	
	printf("\nArray Value :\n ");
	for(i=0;i<5;i++)
	 printf("%f\t",tmp[i]);
	 return 0;
}
