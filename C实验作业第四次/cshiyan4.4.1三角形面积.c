#include "stdio.h"
#include "math.h" 
#define s(a,b,c) ((a+b+c)/2.0)
#define area(s,a,b,c) sqrt(s*(s-a)*(s-b)*(s-c))
int main()
{
	int a,b,c;
	double s,area;
	printf("Please input three numbers:\n");
	scanf("%d %d %d",&a,&b,&c);
	if((a+b>c)&&(a+c>b)&&(b+c>a))
	{
		s=s(a,b,c);
		printf("area=%lf",area(s,a,b,c));
	}
	else
    printf("Your input is wrong!");
    return 0;
}
