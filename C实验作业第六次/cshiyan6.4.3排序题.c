#include "stdio.h"
void zengxu(int *p,int n);
void jiangxu(int *p,int n);
int main(int argc,char *argv[])
{
	int N,i;
	scanf("%d",&N);
	int n[N];
	for(i=0;i<N;i++)
	scanf("%d",&n[i]);
	if(argv[0][0]=='-'&&argv[0][1]=='d')
	jiangxu(n,N);
	else
	zengxu(n,N);
	for(i=0;i<N;i++)
	printf("%d ",n[i]);
	return 0;
}
void jiangxu(int *p,int n)
{
	int i,j,t,*q;
	for(i=0;i<n-1;i++)
	{
		q=p;
		for(j=0;j<n-i-1;j++,q++)
			if(*q<*(q+1))
			t=*(q+1),
			*(q+1)=*q,
			*q=t;
	}
}
void zengxu(int *p,int n)
{
	int i,j,t,*q;
	for(i=0;i<n-1;i++)
	{
		q=p;
		for(j=0;j<n-i-1;j++,q++)
			if(*q>*(q+1))
			t=*(q+1),
			*(q+1)=*q,
			*q=t;
	}
}
