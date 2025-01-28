#include <stdio.h>

int main(void)           // -13.5; -12.86; -14.5; -14.9; -15.43; -14.23; -13.12; -12.6; -12.1; -11.5; -10.8
{
    float a1 = 0;
    float a2 = 0;
    float a3 = 0;
    float a4 = 0;
    float a5 = 0;
    float a6 = 0;
    float a7 = 0;
    float a8 = 0;
    float a9 = 0;
    float a10 = 0;
    float a11 = 0;
     
    int res = scanf ("%f;%f;%f;%f;%f;%f;%f;%f;%f;%f;%*f", &a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9,&a10);

    printf ("%.1f %.1f %.1f %.1f %.1f\n", a6, a7, a8, a9, a10);

    return 0;
}    