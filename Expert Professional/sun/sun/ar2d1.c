#include<stdio.h>
#define row 3
#define col 3
int main()
{
	int ar[row][col], i,j;
	for(i=0;i<row;i++)
	 {
	 	for(j=0;j<col;j++)
	 	 {
	 	   printf("Enter value for Position [%d] [%d]: ",i,j)	;
	 	   scanf("%d",&ar[i][j]);
		 }
	 }
	
		for(i=0;i<row;i++)
	    {
	 	for(j=0;j<col;j++)
	 	   printf("%d\t",ar[i][j]);
	 	printf("\n");
	 } 
	 return 0;
}
