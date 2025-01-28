#include<stdio.h>
#include<stdbool.h>           // координат верхнего левого угла (-5, 0) и правого нижнего (10, 7)  -4.9 0.1

int main(void)
{
    float x, y;
    scanf ("%f %f\n", &x, &y);

    bool b = (x > -5 && x < 10) && ( y > 0 && y < 7);

    printf ("%d\n", b);


    return 0;
}