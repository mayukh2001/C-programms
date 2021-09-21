#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c, temp;
	printf("Enter Value for a:\t");
	scanf("%f",&a);
	printf("Enter Value for b:\t");
	scanf("%f",&b);
	printf("Enter Value for c:\t");
	scanf("%f",&c);
	if(b*b < 4*a*c)
	 printf("\nRoots are Imaginary");
	 else if (b*b==4*a*c)
	 {
	 	printf("\nRoots are Equal : %f",(-b)/(2*a));
	 }
	 else
	 {
	 	temp=sqrt(b*b-4*a*c);
	 	printf("\nRoots are %f and %f",(-b+temp)/(2*a),(-b-temp)/(2*a));
	 }
	 return 0;
}
