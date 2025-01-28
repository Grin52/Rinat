#include<stdio.h>

int main(void)
{                        // 2 3 4 вывод -23
    int a, b, c;
    if(scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Input error.");
        return 0;
    }

    int D = b * b - 4 * a * c ;
    if ( D >= 0 )
        printf ("real roots exist");
        else 
        printf ("%d\n", D);

    return 0;

}
