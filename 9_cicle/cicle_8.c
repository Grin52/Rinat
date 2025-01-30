/*
*/

#include <stdio.h> 

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1 )
        {   printf("Input error");
            return 0;
        }
    

    int x1, x2, x3, x4, x5, x6, x7, x8, x9, x10;
    while ( n > 0 )
    {
        x1 = n % 10;
        printf ("%d", x1);
        n = n / 10;

    }
    
    return 0;    
}
