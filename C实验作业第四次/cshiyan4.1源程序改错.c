#include "stdio.h"
#define SUM(a,b) (a+b)    
#define DIF(a,b) (a-b)
#define SWAP(a,b)  a=a+b,b=a-b,a=a-b
int main()
{
    int a,b;
    printf("Input two integers a, b:");
    scanf("%d%d", &a,&b);
    printf("\nSUM=%d\nthe difference between square of a and square of b is:%d",SUM(a,b), SUM(a,b)*DIF(a,b));
    SWAP(a,b);
    printf("\nNow a=%d,b=%d\n",a,b);
    return 0;
}

