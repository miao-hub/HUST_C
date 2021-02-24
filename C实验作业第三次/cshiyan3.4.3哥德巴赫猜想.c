#include "stdio.h"
int Is_prime(int n);
int main()
{
	int BEGIN,END,i;
	printf("GOLDBACH'S CONJECTURE:\nEvery even number n>4 is the sum of two primes.\n");
    scanf("%d %d",&BEGIN,&END);
    if(BEGIN%2==1) BEGIN=BEGIN+1;
    if(END%2==1) END=END-1;
    if(BEGIN<4) printf("Your input is wrong!\n");
    else
    {
    	for(;BEGIN<=END;BEGIN+=2)
    {
    	for(i=2;i<=BEGIN;i++)
    	{
    		if(Is_prime(i)&&Is_prime(BEGIN-i))
    		{
    			printf("%d=%d+%d\n",BEGIN,i,BEGIN-i);
    			break;
			}
		}
	}
	return 0;
 } 
}
 int Is_prime(int n)
{
	int i;
	if(n==2||n==3) return 1;
	for(i=2;i*i<=n;i++)
	if(n%i==0) return 0;
	return 1;
}
