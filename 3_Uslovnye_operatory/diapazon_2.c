#include<stdio.h>
#include<stdbool.h>           //  [-10; 0) или (5; 12]

int main(void)
{
    float a;
    scanf ("%f\n", &a);

    bool b = (a >= -10 && a < 0) || ( a > 5 && a <= 12);

    printf ("%d\n", b);


    return 0;
}