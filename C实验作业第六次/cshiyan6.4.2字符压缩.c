#include "stdio.h"
void konggeyasuo(char *p1,char *p2);
int main()
{
	int i,n;
	scanf("%d",&n);
	getchar();
	char c1[n][81],c2[n][81],*pc1[n];
    for(i=0;i<n;i++)
    {
    	pc1[i]=c1[i];
    	gets(pc1[i]);
    	konggeyasuo(pc1[i],c2[i]);
    	if(c2[i][0]=='\0') 
		continue;
    	puts(c2[i]);
	}
	return 0;
}
void konggeyasuo(char *p1,char *p2)
{
	int flag=0;
	while(*p1!='\0')
	{
		if(*p1!=' ')
		*p2++=*p1,flag=0;
		else if(flag==0)
		*p2++=*p1,flag=1;
		p1+=1;
	}
	*p2='\0';
}
