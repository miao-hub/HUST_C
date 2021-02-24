#include "stdio.h"
int main()
{
	int o, i,m,n,s[10];
	printf("Please input a number:\n");
    scanf("%d",&m);
    for(i=0;n!=0;i++)
    {
    	s[i]=m%10;
    	n=m/10;
    	m=n;
	}
	o=i;
	for(i=0;i<o;i++)
	{
		printf("%d",s[i]);
	}
	return 0;
} 
