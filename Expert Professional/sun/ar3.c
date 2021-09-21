#include<stdio.h>
#define size 5
int main()
{
	float tmp[size],max;
	int i;
	for(i=0;i<size;i++)
	{
		printf("Enter Value %d:\t",i+1);
		scanf("%f",&tmp[i]);
	}
	
	max=tmp[0];
	for(i=0;i<5;i++)
    {
    	if(max<tmp[i])
    	 max=tmp[i];
	}
        
	 printf("Highest Temp %f\t",max);
	 return 0;
}
