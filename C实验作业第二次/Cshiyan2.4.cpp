#include "stdio.h"
#include "math.h"
int main()
{
	const  double STEP=1e-6;
	double x,d;
	printf("Please enter initial root:\n");
	scanf("%lf",&x);
	do
	{
		d=-(3*x*x*x-4*x*x-5*x+13)/(9*x*x-8*x-5);
		x=x+d;
	}
	while(fabs(d)>STEP);
	printf("x=%lf\n",x);
	return 0;
 } 
