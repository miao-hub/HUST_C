#include "stdio.h"
int main()
{
	int x;
	printf("Please enter your payment:");
	scanf("%d",&x);
	if(x>0&&x<1000) printf("0");
	if(x>=1000&&x<2000) printf("%f",0.05*(x-1000));
	if(x>=2000&&x<3000) printf("%f",0.1*(x-2000)+50);
	if(x>=3000&&x<4000) printf("%f",0.15*(x-3000)+150);
	if(x>=4000&&x<5000) printf("%f",0.2*(x-4000)+300);
	if(x>=5000)  printf("%f",0.25*(x-5000)+500);
	return 0;
}
