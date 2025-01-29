#include <stdio.h> 

int main(void)
{
    unsigned int n = 0;    
    if (scanf("%d", &n) != 1)
        {
            printf("Input error");
        return 0;
        }
    int a = 0;
    int b = 1;
    int c;
    while (c <= n)
    {
        c = a + b;
        a = b;
        b = c;
        
    }   
    printf ("%d %d %d ", a, b, c); 

    return 0;    
}        