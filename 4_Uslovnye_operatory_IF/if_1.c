#include <stdio.h>

int main(void)
{                      // Определите минимальное из введенных чисел x и y
    short x, y;
    if(scanf("%hd, %hd", &x, &y) != 2) {
        printf("Input error.");
        return 0;
    }

    if (x > y)
        printf ("%d\n", y);
        else printf ("%d\n", x);
    
        

    return 0;
}