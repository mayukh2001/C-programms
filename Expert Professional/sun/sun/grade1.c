#include<stdio.h>
int main()
{
	float m;
	printf("Enter Marks:\t");
	scanf("%f",&m);
	if(m<0)
	printf("Invalid Input");
	else
	{
	if(m<50)
	 printf("Fail");
	else
	{
		if(m<=60)
		 printf("Grade D");
		else
		{
			if(m<=70)
			 printf("Grade C");
			else
			{
			 if(m<=80)	
			  printf("Grade B");
			else
			{
			  if(m<=90)
			   printf("Grade A");
			  else
               {
			       if(m<=100)
			        printf("Grade O");
			       else
				    printf("Invalid Input"); 
			   }
			
			}  
			} 
		} 
	}
 }
	return 0;
}

