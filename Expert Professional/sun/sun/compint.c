#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,y, a;
	printf("Enter amount\t");
	scanf("%f",&p);
	printf("Enter Rate of Interest\t");
	scanf("%f",&r);
	printf("Enter no of Year\t");
	scanf("%f",&y);
	a=p * pow ( (1+r/100),y ) ;
	printf("\nFinal Amount %.2f",a);
	return 0;
}
