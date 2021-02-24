#include "stdio.h"
int Is_primer(int n);
int main()
{
	int n,i;
	printf("Please input a number:\n");
	scanf("%d",&n);
	if(n%2==1)
	printf("Your input is a fault!\n");
	else
	{
		for(i=2;;i++)
		{
			if(Is_primer(i)&&Is_primer(n-i))
			{
				printf("%d=%d+%d",n,i,n-i);
				break;
			}
		}
	}
	return 0;
}
int Is_primer(int n)
{
	int i;
	if(n==2||n==3) return 1;
	for(i=2;i*i<=n;i++)
	if(n%i==0) return 0;
	return 1;
}
