#include <stdio.h>
#include <stdlib.h>
#define RAND_MAX 32767

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    double c1 = rand () / (double)RAND_MAX * ( b - a ) + a ;
    double c2 = rand () / (double)RAND_MAX * ( b - a ) + a ;
    double c3 = rand () / (double)RAND_MAX * ( b - a ) + a ;
    double c4 = rand () / (double)RAND_MAX * ( b - a ) + a ;
    double c5 = rand () / (double)RAND_MAX * ( b - a ) + a ;
    double c6 = rand () / (double)RAND_MAX * ( b - a ) + a ;
    double c7 = rand () / (double)RAND_MAX * ( b - a ) + a ;
    double c8 = rand () / (double)RAND_MAX * ( b - a ) + a ;
    double c9 = rand () / (double)RAND_MAX * ( b - a ) + a ;
    double c10 = rand () / (double)RAND_MAX * ( b - a ) + a ;
    

    printf ("%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f\n", c1, c2, c3, c4, c5, c6, c7, c8, c9, c10 );
    
    return 0;
}