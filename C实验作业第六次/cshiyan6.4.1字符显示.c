#include "stdio.h"
int main()
{
	char n[8];
	char *p=n;
	long m;
	scanf("%ld",&m);
	for(;p<&n[0]+8;)
	{
		*p=m&0xf;
		if(*p<10) *p=*p+'0';
		else *p=*p-10+'a';
		p++;
		m=m>>4;
		*p=m&0xf;
		if(*p<10) *p=*p+'0';
		else *p=*p-10+'a';
		p++;
		m=m>>4;
	}
	p=p-1;
	for(;p>=&n[0];p--)
	printf("%c",*p);
	return 0;
}
