#include<stdio.h>
#include<stdbool.h>           //  [-5.45; 10.37]

int main(void)
{
    float a;
    scanf ("%f\n", &a);

    bool b = a >= -5.45 && a <= 10.37;

    printf ("%d\n", b);


    return 0;
}