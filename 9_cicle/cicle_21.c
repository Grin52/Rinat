#include <stdio.h> 

int main(void)
{
    int n;
    if (scanf("%d ", &n) != 1 )
        {
            printf("Input error");
        return 0;        
        }

    while (n != 0)
    {
        printf ("%d ", n * n);
    }
    return 0;    
}
