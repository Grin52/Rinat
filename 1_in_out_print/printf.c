#include <stdio.h>

int main(void)
{
    char ch = 'u';
    short sh = -55;
    int var_i = 1024;
    double var_d = 3.1415;

    //printf ("%c %d %d %f",  ch , sh , var_i , var_d);

    char byte = 65;
    //unsigned short height = 1055;
    int distance = 1000000;
    float pi = 3.1415f;

    //printf ( "%c\n%d\n%d\n%f" , byte , height , distance , pi);

    unsigned height = 12345012;
    long long dist = 1234567890LL;
    long double weight = 45.7845;

    //printf ("%u %lld %.4Lf\n" , height , dist , weight );

    int a1 = -123, a2 = 6, a3 = 1024;

    //printf ( "[%5d]\n[%5d]\n[%5d]\n", a1 , a2 , a3);

    double d = 546e-3;

    //printf ("%.3f\n", d);

    //unsigned char h = 11, m = 8, s = 1;

    //printf ("%2.2d:%2.2d:%2.2d", h , m , s);

    unsigned char h = 17, m = 45, s = 5;

    printf ("%#.2x:%#.2x:%#.2x\n", h , m , s);

    return 0;
}
