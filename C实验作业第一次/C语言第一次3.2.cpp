#include "stdio.h"
int main()
{
	unsigned short x,m,n;
	printf("����x(ʮ������)��m(0~15)��n(1~16-m):\n");
	scanf("%x %hu %hu",&x,&m,&n);
	if(m>=0 && m<=15 && n>=1 && n<=(16-m))
	{
	x=(x>>m)<<(16-n);
	printf("%0X",x);
    }
	else
	{ 
	printf("�������\n");
	} 
	return 0;
} 
