#include <stdio.h>
int main()
{ 
  int i=1;
  int s=1;
  int n;
  printf("Please enter n:");
  scanf("%d",&n);
  do
  {
     s=s*i;
     i++;
  }
  while(i<=n);
  printf("%d! = %d",n,s);
  return 0;
}

