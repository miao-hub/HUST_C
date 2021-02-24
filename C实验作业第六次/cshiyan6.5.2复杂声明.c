#include "stdio.h"
#include "string.h"
int main()
{
	int i;
	char *(*p[2])(char *,const char *);
	char c[2][81],*pc[2];
	for(i=0;i<2;i++)
		pc[i]=&c[i][0];
    gets(pc[0]);
    gets(pc[1]);
    p[0]=strcat;
    p[1]=strcpy;
    printf("%s\n",p[0](pc[0],pc[1]));
    printf("%s\n",p[1](pc[0],pc[1]));
    return 0;
	
}
