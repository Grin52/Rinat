#include <stdio.h>

int main(void)         // 65000 32000 0.5 -78.5
{
    int a;
    short b;
    float c;
    double d;

    int res = scanf ("%d %hd %f %lf" , &a, &b, &c, &d);

    printf ("%d %d %.2f %.2f" , a, b, c, d);

    return 0;
}
