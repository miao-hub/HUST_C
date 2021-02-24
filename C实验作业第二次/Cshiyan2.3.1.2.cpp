#include "stdio.h"
int main()
{
	int x,m;
	printf("Please enter your payment:");
	scanf("%d",&x);
	m=x/1000;
	switch(m)
	{
	case 0:printf("0");break;
	case 1:printf("%f",0.05*(x-1000));break;
	case 2:printf("%f",0.1*(x-2000)+50);break;
	case 3:printf("%f",0.15*(x-3000)+150);break;
	case 4:printf("%f",0.2*(x-4000)+300);break;
	default:printf("%f",0.25*(x-5000)+500);
    }
	return 0;
}
