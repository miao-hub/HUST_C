#include "stdio.h"
int main()
{
	unsigned short x,m,n;
	printf("输入x(十六进制)，m(0~15)和n(1~16-m):\n");
	scanf("%x %hu %hu",&x,&m,&n);
	if(m>=0 && m<=15 && n>=1 && n<=(16-m))
	{
	x=(x>>m)<<(16-n);
	printf("%0X",x);
    }
	else
	{ 
	printf("输入错误！\n");
	} 
	return 0;
} 
