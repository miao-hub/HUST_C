#include<stdio.h>       
#define PI 3.14159      
int main()
/* for task 3*/
{   
    int f ;
    short p, k ;
    double c , r , s ;
    printf("input hex int k, p :");
	scanf("%x %x", &k, &p );
    int newint = (p&0xff00)|(k&0xff00)>>8;
    printf("newint = %x\n\n",newint);
    return 0;
}

