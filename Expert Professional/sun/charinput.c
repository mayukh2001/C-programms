#include<stdio.h>
#include<conio.h>
int main()
{
	char c1,c2,c3;
	printf("Enter a Character:\t");
	scanf("%c",&c1);
	printf("\nYou have Entered %c",c1);
	printf("\nEnter aother Character:\t");
	c2=getch();
	printf("\nYou have Entered %c",c2);
	printf("\nEnter one more Character:\t");
	c3=getche();
	printf("\nYou have Entered %c",c3);
}

