#include "stdio.h"
void strnins(int s[],int t[],int n);
int main()
{
	int s[100],t[100],n;
	int i=0;
	int j=0;
	while((s[i++]=getchar())!='\n');
	s[i-1]='\0';
	while((t[j++]=getchar())!='\n');
	t[j-1]='\0';
	scanf("%d",&n);
	strnins(s,t,n);
	return 0;
}
void strnins(int s[],int t[],int n)
{
	int k;
	char m[100];
	int i=0;int j=0;
	while(s[i]!='\0') i++;
	while(t[j]!='\0') j++;
	for(k=0;k<i-n;k++)
	m[k]=s[n+k];
	for(k=0;k<j;k++)
	s[n+k]=t[k];
	for(k=0;k<n+j;k++)
	printf("%c",s[k]);
	for(k=0;k<i-n;k++)
	printf("%c",m[k]);
	
}
