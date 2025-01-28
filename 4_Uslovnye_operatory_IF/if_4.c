#include<stdio.h>
                       // 2.3, 8.42, 9.45    5.46, 0.1, 20.5
int main(void)
{                                    
    float a, b, c;
    if(scanf("%f,%f,%f", &a, &b, &c) != 3) {
        printf("Input error.");
        return 0;
    }

    if ( (a + b) > c && (b + c) > a && (a + c) > b )
        printf ("yes");
    else printf ("no");

    return 0;

}
