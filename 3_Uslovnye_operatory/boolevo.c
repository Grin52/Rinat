#include<stdio.h>
#include<stdbool.h>

int main(void)
{
    float a;
    scanf ("%f\n", &a);

    bool b = (int)a % 5;

    printf ("%d\n", !b);


    return 0;
}