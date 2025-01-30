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

    int x;
    int y;

    
    while ( n > 0 )
    {
        x = n % 10;
        printf ("x = %d\n", x);
        n = n / 10;
        printf ("n = %d\n", n);
        y = x * 10;
        printf ("y = %d\n\n", y);

    }
    
    return 0;    
}
