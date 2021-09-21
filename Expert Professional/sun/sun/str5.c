#include<stdio.h>
int main()
{
	char str[20];
	int i;
	printf("Enter a String:\t");
	gets(str);
	for(i=0; str[i] != '\0'; i++);
	 printf("\nLength of the String %d",i);
	return 0; 
}
