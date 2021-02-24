#include "stdio.h"
int main()
{
	char c;
	int a=0;
	while((c=getchar())!='\n')
	{
		putchar(c);
		while((c=getchar())==' ')
		{
			a++;
		}
	}
	return 0;
}
