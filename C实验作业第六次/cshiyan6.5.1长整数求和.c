#include "stdio.h"
#define N 20
#define M 10
void reverse(int *a,int SIZE);
int main()
{
	int a[N+M],b[N+M],c[N+M+1];
	int *pa=a,*pb=b,*pc=c;
	for(;pc<&c[0]+N+M+1;)
	*pc++=0;
	for(;pa<&a[0]+N+M;pa++)
	{
		if(pa==&a[N]) getchar();
		*pa=getchar()-'0';
	}
	getchar();
	for(;pb<&b[0]+N+M;pb++)
	{
		if(pb==&b[N]) getchar();
		*pb=getchar()-'0';
	}
	reverse(a,N+M);
	reverse(b,N+M);
	for(pc=c,pa=a,pb=b;pc<&c[0]+N+M;pa++,pb++,pc++)
	{
		*pc=*pa+*pb+*pc;
		if(*pc>9) *(pc+1)=1,*pc=*pc-10;
	}
	reverse(c,N+M+1);
	if(c[0]==0)
	{
		for(pc=c+1;pc<&c[0]+N+M+1;pc++)
		{
			printf("%d",*pc);
			if(pc==&c[N]) printf(".");
		}
	 } 
	 else
	 {
	 	for(pc=c;pc<&c[0]+N+M+1;pc++)
	 	{
	 		printf("%d",*pc);
	 		if(pc==&c[N]) printf(".");
		 }
	 }
	return 0;	
}
void reverse(int *a,int SIZE)
{
	int i,j,t;
	for(i=0,j=SIZE-1;i<j;i++,j--)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
}
