#include "stdio.h"
void main(void)
{
	float n;
    float *p=&n;
    scanf("%f",p);
    printf("%f\n",*p);
}

