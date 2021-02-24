#include <stdio.h>
int main()
{ 
  int i=1;
  int s=1;
  int n;
  printf("Please enter n:");
  scanf("%d",&n);
  while(i<=n)
  {
     s=s*i;
     i++;
  }
  printf("%d! = %d",n,s);
  return 0;
}

