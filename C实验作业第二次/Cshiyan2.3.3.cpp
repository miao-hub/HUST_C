#include "stdio.h"
int main()
{
	int i,k,m,n,p,s[10][10];
	for(i=0;i<=9;i++)
	{
		for(k=1;k<=18-2*i;k++)
		{
			putchar(' ');
		}
		s[0][0]=1;
		for(m=1;m<=9;m++)
		{
			s[m][0]=1;
			s[m][m]=1;
		}
		for(n=2;n<=i;n++)
		{
			s[i][n-1]=s[i-1][n-2]+s[i-1][n-1];
		}
		for(p=0;p<=i;p++)
		{
			printf("%4d",s[i][p]);
		}
		printf("\n");
	}
	return 0;
}
