#include<stdio.h>
#define len 50
int main()
{
	char str[len],temp;
	int i, j, mid;
	printf("Enter a String:\t");
	gets(str);
	for(i=0;str[i]!='\0';i++);
	i--;
	mid=i/2;
	for(j=0; j<=mid; j++,i--)
	 {
	 	temp=str[j];
	 	str[j]=str[i];
	 	str[i]=temp;
	 }
	printf("\nReverse String : %s",str);
	return 0;
}
