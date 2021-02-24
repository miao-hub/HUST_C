#include "stdio.h"
int Is_xiangjian(int m,int n);
int main()
{
    long int m,n;
	printf("Please input two numbers:\n");
	scanf("%d %d",&m,&n);
	printf("%d",Is_xiangjian(m,n));
	return 0;
}
int Is_xiangjian(int m,int n)
{
	if(m<n){
		m=m+n;
		n=m-n;
		m=m-n;
	}
	if(m%n==0) return n;
	Is_xiangjian(n,m%n); 
 } 
