#include<stdio.h>
#define row 3
#define col 3
int main()
{
	int ar[row][col], i,j,max;
	for(i=0;i<row;i++)
	 {
	 	for(j=0;j<col;j++)
	 	 {
	 	   printf("Enter value for Position [%d] [%d]:\t",i,j)	;
	 	   scanf("%d",&ar[i][j]);
		 }
	 }
	
		for(i=0;i<row;i++)
	    {
	 	for(j=0;j<col;j++)
	 	   printf("%d\t",ar[i][j]);
	 	printf("\n");
	 } 
	 
	
	for(i=0;i<row;i++)
	 {
	   max=ar[i][0];
	  	for(j=0;j<col;j++)
	  	 {
		    if(max<ar[i][j])
	 	     max=ar[i][j];
	     }
	    printf("\nMax Value : %d",max) ;
     }
	 return 0;
}
