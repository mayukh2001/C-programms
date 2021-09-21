#include<stdio.h>
int main()
{
	int yr;
	printf("Enter Year\t");
	scanf("%d",&yr);
	if(yr%400==0)
	 printf("Leap Year");
	else
	{
		if(yr%100==0)
	      printf("Not a Leap Year");	 
	    else
		{  
	    if(yr%4==0)  
	      printf("Leap Year");
	    else
		 printf("Not a Leap Year");  
     	} 
	} 
	
return 0;
}
