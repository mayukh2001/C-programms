#include<stdio.h>
int main()
{
	float m;
	printf("Enter Marks:\t");
	scanf("%f",&m);
	if(m<0 || m>100)
	printf("Invalid Input");
	if(m>=0 && m<50)
	 printf("Fail");
	
	if(m>=50 && m<=60)
	printf("Grade D");
	
	if(m>60 && m<=70)
	printf("Grade C");
	
	if(m>70 && m<=80)	
	printf("Grade B");
	
	if(m>80 && m<=90)
	printf("Grade A");
	
	if(m>90 && m<=100)
	printf("Grade O");
	
	return 0;
}

