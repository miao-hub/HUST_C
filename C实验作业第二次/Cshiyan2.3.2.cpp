#include "stdio.h"
int main()
{
	const int a=1;
	const int b=0;
	int state=1;
	char c;
	printf("Please input words:\n");
    while((c=getchar())!='\n')
    {
    	if(state==a)
    	{
    		putchar(c);
    		if(c==' ')
    		state=b;
		}
		else if(state==b)
		{
			if(c!=' ')
			{
				putchar(c);
				state=a;
			}
		}
	}
	return 0;	 
	
}
