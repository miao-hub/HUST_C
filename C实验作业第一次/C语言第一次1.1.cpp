 #include<stdio.h>       
 #define PI 3.14159      
 int main()
 {
   int f ;
   short p, k ;
   double c , r , s ;
  /* for task 1 */
   printf("Input  Fahrenheit:" ) ;
   scanf("%d",&f ) ;
   c = 5.0/9*(f-32) ;
   printf( " \n %d (F) = %.2f (C)\n\n ", f, c ) ;
   return 0;
}

