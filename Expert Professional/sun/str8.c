#include<stdio.h>
int main()
{
	char str[20];
	int i, count;
	printf("Enter a String:\t");
	gets(str);
	for(i=0, count=0; str[i] != '\0'; i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'
		       ||str[i]=='A'|| str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		 count++;
	}
	printf("\nNo of Vowels %d",count);
	return 0; 
}
