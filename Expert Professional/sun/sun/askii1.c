#include<stdio.h>
int main()
{
	char c1;
	printf("Enter a Character : \t");
	scanf("%c",&c1);
	printf("\nCharacter is %c and ASCII is %d", c1,c1);
	c1++;
	printf("\nNext Character is %c and ASCII is %d", c1,c1);
}
