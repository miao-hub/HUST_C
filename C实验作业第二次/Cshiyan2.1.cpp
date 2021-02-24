#include<stdio.h>
int main()
{
    int i,j,k,c,m,n=10;
    for(i=0;i<n;i++)
    {
        for(m=0;m<=n-i;m++)
            {
                printf("  ");
            }
        for(j=0;j<=i;j++)
            {
                if(j==0)c=1;
                else c=c*(i+1-j)/j;
                printf("%4d",c);
            }
        printf("\n");
    }
    return 0;
}
