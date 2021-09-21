#include<stdio.h>
int main()
{
	char name[50];
	printf("Enter Your Name :\t");
	gets(name);
	//printf("Hello %s",name);
	puts("Hello");
	puts(name);
	return 0;
}
