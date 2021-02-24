#include "stdio.h"
int main()
{
	int n,i;
	char c[32];
	int mask=1<<31;
	scanf("%d",&n);
	for(i=0;i<32;i++)
	{
		c[i]=n&mask?'1':'0';
		n=n<<1; 
	}
	for(i=0;i<32;i++)
	printf("%c",c[i]);
	return 0;
}
 
