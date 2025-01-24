#include <stdio.h>

int main(void)
{
    unsigned char bits;
    scanf("%hhu", &bits);
    unsigned char a = 40;
    if ((bits & a) == a )
        printf ("%d\n", bits);
    else 
        printf ("-1");

    // здесь продолжайте программу

    return 0;
}