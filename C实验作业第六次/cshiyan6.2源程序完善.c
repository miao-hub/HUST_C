#include "stdio.h"
#include "string.h"
void main(void)
{
    char * (*p)(char *s,const char *t);
    char a[80],b[80],c[160],*result=c;
	int choice,i;
	do{
		printf("\t\t1 copy string.\n");
		printf("\t\t2 connect string.\n");
		printf("\t\t3 exit.\n");
		printf("\t\tinput a number (1-3) please!\n");
		scanf("%d",&choice);
	}while(choice<1 || choice>5);
	switch(choice){
	case 1:
		p=strcpy;
		break;
	case 2:
		p=strcat;
		break;
	case 3:
		goto down;
	}
	getchar();
	printf("input the first string please!\n");
	i=0;
    while((a[i++]=getchar())!='\n');
    a[i-1]='\0';
	printf("input the second string please!\n");
	i=0;
    while((b[i++]=getchar())!='\n');
    b[i-1]='\0';
	result=(*p)(a,b);
	printf("the result is %s\n",result);
down:
	;
}
