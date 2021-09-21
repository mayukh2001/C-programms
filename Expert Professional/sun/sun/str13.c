#include<stdio.h>
#define len 50
int main()
{
	char str[len];
	int i, j, mid,flag=1;
	printf("Enter a String:\t");
	gets(str);
	for(i=0;str[i]!='\0';i++);
	i--;
	mid=i/2;
	for(j=0; j<=mid; j++,i--)
	 {
	 	if(str[j] != str[i])
	 	{
		  flag=0;
		  break;
	    }
	 }
	if(flag)   //if(flag==1)
	printf("\nString is Palindrome");
	else
	printf("\nString is not Palindrome");
	return 0;
}
