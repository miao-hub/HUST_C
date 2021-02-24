#include "stdio.h"
double sum_fac(int n);
int main()
{
	int k;
	for(k=1;k<6;k++)
	{
		printf("k=%d\tthe sum is %lf\n",k,sum_fac(k));
	}
	return 0;
}
double sum_fac(int n)
{
    static double fac=1;
    static double s=0;
    fac*=1.0/n;
    s+=fac;
	return s;
}
