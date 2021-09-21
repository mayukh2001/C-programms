#include<stdio.h>
int main()
{
	int u;
	float uc=0,gc=0,sc=0.0,ec=0,tax=0,rent=150.0,subtot=0,tot=0;
	printf("Enter units Consumed :\t");
	scanf("%d",&u);
	if(u<=100)
	 uc=u*.5;
	else 
	{
     if(u<=200)
      uc=100*.5 + (u-100)*.75;
     else
	 {
	    if(u<=400)
		uc=100*.5+100*.75+(u-200)*1;
		else
		{
			if(u<=500)
			 uc=100*.5+100*.75+200+(u-400)*1.25;
			else
			  uc=100*.5+100*.75+200+100*1.25+(u-500)*1.5;
		}
	  }  
	} 
	if(uc>300)
	 ec=uc*.115;
	else
	 ec=uc*.055; 
	 gc=uc+ec;
	if(gc>350) 
	 sc=gc*.0765;
	else
	 sc=gc*.0125;
	subtot=gc+sc+rent;
	tax=subtot*.125;
	tot=subtot+tax;
	printf("\nFinal Bill %.2f",tot)  ;
}
