#include<stdio.h>
#define size 5
int main()
{
	int tmp[size],n,i,flag=0, index;
	for(i=0;i<size;i++)
	{
		printf("Enter Value %d:\t",i+1);
		scanf("%d",&tmp[i]);
	}
	
	printf("Enter Value to be Searched : \t");
	scanf("%d",&n);
	
	for(i=0,index=0;i<size;i++)
    {
    	if(n==tmp[i])
    	 {
    	 	flag=1;
    	 	index=i+1;
    	 	break;
		 }
	}
        
	 if(flag)
	 printf("Value is Present in the List at Position %d",index);
	 else
	 printf("Value is not Present in the List");
	 return 0;
}
