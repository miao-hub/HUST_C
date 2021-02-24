#include "stdio.h"
int main()
{
   int a, b;
   printf("Input two integers:");
   scanf("%d %d",&a,&b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("%d %d",a,b);
   return 0;
}
