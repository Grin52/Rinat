/* Продолжите программу, которая должна вычислять первые n членов 
геометрической прогрессии и выводить их по порядку в одну строчку через пробел. 
 Члены прогрессии вычисляются по следующей схеме:

b1 - первый член;
b1 * q - второй член;
b1 * q^2 - третий член;
...
b1 * q^(n-1) - n-й член 
*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    int b1, q, n;
    scanf("%d; %d; %d", &b1, &q, &n);

    int i = 0;
    for (b1; i < n ; ++i){
        int p = b1 * pow (q, i) ;
        printf ("%d ", p);
    } 
    return 0;
}