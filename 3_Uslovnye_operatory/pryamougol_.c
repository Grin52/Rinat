#include <stdio.h>
                            //   не умещающихся целиком на плоскости. 23; 44
int main(void)
{        // ширина         // высота
    int rect_width = 640, rect_height = 480;
    int w = 1,              h = 1;
    scanf("%d; %d", &w, &h);

    int x, y;  // 

    _Bool ugolok_x = rect_width % w;  // булево наличия остатка по оси x
    _Bool ugolok_y = rect_height % h;  // булево наличия остатка по оси y

    x = rect_width / w; // 10
    y = rect_height / h; // 9


    //printf ("%d %d\n", x, y );
    printf ("%d\n", (x * ugolok_y) + (y * ugolok_x) + ugolok_x * ugolok_y);

    return 0;
}