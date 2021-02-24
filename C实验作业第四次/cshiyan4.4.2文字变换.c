#include "stdio.h"
#define CHANGE 0 
int main()
{
	char c;
    while((c=getchar())!='\n')
    {
	    	if(CHANGE==1)
	    	{
	    		if(c>='a'&&c<='z') putchar(c-32);
		        else if(c>='A'&&c<='Z') putchar(c+32);
	            else putchar(c);
			}
			else
	        putchar(c);
	}	
	return 0;
}
