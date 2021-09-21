#include<stdio.h>
#include<string.h>
#define len 50
int main()
{
	char str[len],str1[len];
	printf("Enter a String:\t");
	gets(str);
	printf("\nLength of the String is %d", strlen(str));
	strcpy(str1,str);
	strrev(str1);
	if (strcmp(str1,str)==0)
	 printf("\nString is Palindrome");
	else
	 printf("\nString is not a Palindrome"); 
	 
	if (stricmp(str1,str)==0)
	 printf("\nString is Palindrome");
	else
	 printf("\nString is not a Palindrome"); 
	 
	return 0; 
}
