#include<stdio.h>
int main()
{
	int yr;
	printf("Enter Year\t");
	scanf("%d",&yr);
	if(  (yr%4==0   && yr%100 !=0)	|| (yr%400==0))
	    printf("Leap Year");
	else
	   printf("Not a Leap Year");
	return 0;
}
