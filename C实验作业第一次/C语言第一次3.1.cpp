#include "stdio.h"
int main()
{ 
	int m;
    m=getchar();
	if(m>='A'&&m<='Z')
	{
		m=m+32;
		putchar(m);
	} 
	else
	putchar(m);
	return 0;
}
