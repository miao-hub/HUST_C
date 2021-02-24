#include "stdio.h"
int binarysearch(int c[],int n,int p);
int main()
{
	int n,i,j,t,m;
	scanf("%d",&n);
	int s[n],c[n];
	for(i=0;i<n;i++)
	scanf("%d %d",&s[i],&c[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(c[j]<c[j+1])
			{
				t=c[j];
				c[j]=c[j+1];
				c[j+1]=t;
				t=s[j];
				s[j]=s[j+1];
				s[j+1]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	printf("%d %d\n",s[i],c[i]);
	scanf("%d",&m);
	t=binarysearch(c,n,m);
	if(t!=-1) printf("%d %d",s[t],c[t]);
	else printf("not found!");
	return 0;
}
int binarysearch(int c[],int n,int p)
{
	int f=0,b=n-1,m;
	if(p>c[0]||p<c[n-1]) return -1;
	else
	{
		while(f<=b)
    	{
		m=(f+b)/2;
		if(c[m]<p) b=m-1;
		else if(c[m]>p) f=m+1;
		else return m;
	    }
	}
	return -1;
}

