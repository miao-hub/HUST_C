#include "stdio.h"
int main()
{
	int a[3][4],b[4][3];
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		b[j][i]=a[i][j];
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		printf("%5d",a[i][j]);
		putchar('\n');
	}
	putchar('\n');
	putchar('\n');
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		printf("%5d",b[i][j]);
		putchar('\n');
	}
	return 0;
}
