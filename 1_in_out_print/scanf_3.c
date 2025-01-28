#include <stdio.h>

int main(void)           //  1234567890123, 5643.001, 1200
{
    long long var_ll = 0;
    long double var_ld = 0.;
    short sh = 0;

    int res = scanf ("%lld,%Lf,%hd", &var_ll, &var_ld, &sh);

    printf ("%lld %d\n", var_ll, sh);

    return 0;
}    