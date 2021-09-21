#include<stdio.h>
#include<ctype.h>
int main()
{
	char str[20], tmp;
	int i, count;
	printf("Enter a String:\t");
	gets(str);
	for(i=0, count=0; str[i] != '\0'; i++)
	{
		tmp=tolower(str[i]);
		if(tmp=='a'||tmp=='e'||tmp=='i'||tmp=='o'||tmp=='u')
		 count++;
	}
	printf("\nNo of Vowels %d",count);
	return 0; 
}
