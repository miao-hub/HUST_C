#include "stdio.h"
int main()
{
   int a[10],i,j,k=1;
   for(i=0;i<10;i++)
   a[i]=i+1;
   while(k<31)
   {
   	if(a[i%10]) k++,i++;
   	else 
	{i++;
	continue;
	}
   	if((k-1)%3==0)
   	{
   		printf("%d ",a[(i-1)%10]);
   		a[(i-1)%10]=0;
	   }
   }
   return 0;
} 
