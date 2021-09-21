#include<ctype.h>
#include<stdio.h>
int main()
{
	
	char c1;
	printf("Enter a Character\t");
	scanf("%c",&c1);
	fflush(stdin);
	c1=toupper(c1);
	printf("\nCharacter in Upper Case %c",c1);
	printf("\nEnter another Character\t");
	scanf("%c",&c1);
	c1=tolower(c1);
	printf("\nCharacter in Lower Case %c",c1);
}
