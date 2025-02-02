#include <stdio.h>

int main(void)
{
    int x;
    if(scanf("%d", &x) != 1) {
        printf("Input error.");
        return 0;
    }
    int fotx = x > 0 ? x : 0;
    printf ("%d\n", fotx);

    return 0;
}
