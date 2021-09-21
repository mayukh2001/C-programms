#include<stdio.h>
int main()
{
	char str1[50], str2[30] , str3[80];
	int i,j;
	printf("Enter a String :\t");
	gets(str1);
	printf("Enter another String :\t");
	gets(str2);
	for(i=0; str1[i]!='\0';i++)	
	 str3[i]=str1[i];
	str3[i] =' ';
	i++;
	for(j=0;str2[j]!='\0'; i++,j++)
	 str3[i]=str2[j];
	str3[i]='\0';	
	printf("\nNew String : %s",str3);
	return 0; 
}
