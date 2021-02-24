#include "stdio.h"
#include "stdlib.h"
#include "string.h" 
int main()
{
	int i=1,k,m;
	char c[100],ch;
	FILE *fp;
	gets(c);
	k=strlen(c);
	if(c[0]>='a'&&c[0]<='z')
	c[0]-=32;
	for(m=0;m<k;m++)
	{
	    if(c[i]==' '&&c[i+1]>='a'&&c[i+1]<='z')
	    c[i+1]-=32;
	    i++;
    }
	fp=fopen("D:\\C语言\\C实验作业第八次\\text.txt","w+");
	fprintf(fp,"%s",c);
	fclose(fp);
	return 0;
}
