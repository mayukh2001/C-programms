#include<stdio.h>
#define size 5
int main()
{
	float tmp[size],sum=0.0;
	int i;
	for(i=0;i<size;i++)
	{
		printf("Enter Value %d:\t",i+1);
		scanf("%f",&tmp[i]);
	}
	
	
	for(i=0;i<5;i++)
        sum=sum+tmp[i];
        
	 printf("Avg Temp %f\t",sum/size);
	 return 0;
}
