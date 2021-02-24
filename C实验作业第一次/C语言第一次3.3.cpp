#include "stdio.h"
int main()
{
	unsigned long m;
	printf("Please printf your number:");
	scanf("%d",&m);
	unsigned mask=0xff;
	int a,b,c,d;
	a=m>>24&mask;
	b=m>>16&mask;
	c=m>>8&mask;
	d=m&mask;
	printf("%d.%d.%d.%d",d,c,b,a);
	return 0;
}
