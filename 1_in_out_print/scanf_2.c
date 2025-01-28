#include <stdio.h>

int main(void)        // 100000
                      // -73.12
                      // 1.234
{
    int a = 0;
    float b = 0;
    float c = 0;
    //float d = 0;

    int res = scanf ("%d %f %f\n", &a, &b, &c );

    printf ("%d %.2f %.2f", a, b, c);

    return 0;
}
