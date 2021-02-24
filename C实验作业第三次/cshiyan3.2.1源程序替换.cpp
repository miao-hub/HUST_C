#include "stdio.h"
long sum_fac(int n);
int main()
{
	int k;
	for(k=1;k<6;k++)
	{
		printf("k=%d\tthe sum is %ld\n",k,sum_fac(k));
	}
	return 0;
}
long sum_fac(int n)
{
    static long fac=1;
    static long s=0;
    fac*=n;
    s+=fac;
	return s;
}
