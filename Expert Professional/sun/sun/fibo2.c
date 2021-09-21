// check wheather the input is paert of fibonaci series
#include<stdio.h>
int main()
{
	int n, t1=0, t2=1, t3=0,flag=0;
	printf("Enter no to check :\t");
	scanf("%d",&n);
	while(t3<=n)
	{
		if(t3==n)
		 {
		 	flag=1;
		 	break;
		  } 		  
		t1=t2;
		t2=t3;
		t3=t1+t2;
	}
	
	if(flag)   
	 printf("%d part of Fibonaci Series",n);
	else
	  printf("%d is not part of Fibonaci Series",n);
		
return 0;	
}


