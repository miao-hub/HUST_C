#include "stdio.h"
#define max(a,b,c) (a>b?(a>c?a:c):(b>c?b:c))
int main()
{
	int a, b, c;
    printf("Enter three integers:");
    scanf("%d%d%d",&a,&b,&c);
    printf("\nthe maximum of them is %d\n",max(a,b,c));
    return 0;
}
