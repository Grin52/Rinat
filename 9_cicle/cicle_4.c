#include <stdio.h> 

int main(void)
{
    unsigned int n = 0;    
    if (scanf("%d", &n) != 1)
        {
            printf("Input error");
        return 0;
        }
    if (n < 10)
        {
            printf("Input error");
        return 0;
        }

    int i = 10;
    int x = 0;
    int a = 0;

    while (n > 0)
    {
        a = a + n % i;
        n = n / i;
    }
    
    printf ("%d\n", a);

return 0;
}