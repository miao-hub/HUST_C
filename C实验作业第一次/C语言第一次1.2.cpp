#include<stdio.h>       
#define PI 3.14159      
int main()
/* for task 2 */
{   
    int f ;
    short p, k ;
    double c , r , s ;

    printf("input the radius r:");
    scanf("%lf", &r);
    s = PI * r * r;
    printf("\nThe acreage is %.2f\n\n",s);
    return 0;
}
