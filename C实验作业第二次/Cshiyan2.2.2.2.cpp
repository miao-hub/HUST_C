#include <stdio.h>
int main()
{ 
  int n=1;
  int s;
  int m=1;
  printf("Please enter s:");
  scanf("%d",&s);
  do
  {
  	m=m*n;
  	n++;
  }
  while(m<s);
  printf("n=%d",n-1);
  return 0;
}

