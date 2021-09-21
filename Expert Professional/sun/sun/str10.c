#include<stdio.h>
#include<ctype.h>
int main()
{
	char str[100], tmp;
	int i, counta=0,countn=0,counts=0;
	printf("Enter a String:\t");
	gets(str);
	for(i=0; str[i] != '\0'; i++)
	{
		if(str[i] >= 48 && str[i]<=57)
		 countn++;
		else if( (str[i]>=65 && str[i]<=90) ||  (str[i]>=97 && str[i]<=122)    ) 
		  counta++;
	    else
	     counts++;		
	}
	printf ("Alphabets: %d, Digits: %d, Special Characters : %d ",counta, countn,counts);
	return 0; 
}
