#include<stdio.h>
int main()
{
	char str[20];
	int i;
	printf("Enter a String:\t");
	gets(str);
	for(i=0; str[i] != '\0'; i++)
	 printf("%c\n",str[i]);
	return 0; 
}
