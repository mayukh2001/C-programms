#include<stdio.h>
int main()
{
	char str[20];
	int i, count;
	printf("Enter a String:\t");
	gets(str);
	for(i=0, count=0; str[i] != '\0'; i++)
	{
		if(str[i]==' ')
		 count++;
	}
	printf("\nNo of Words %d",count+1);
	return 0; 
}
