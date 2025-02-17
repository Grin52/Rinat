/*   Продолжите программу, в которой из входного потока читаются величины:

a1 - первый член арифметической прогрессии;
d - разность арифметической прогрессии;
n - количество членов арифметической прогрессии.
Необходимо вычислить первые n членов арифметической прогрессии и вывести их по порядку
 в одну строчку через пробел. 
Члены прогрессии вычисляются по следующей схеме:

a1 - первый член;
a1 + d - второй член;
a1 + 2d - третий член;
...
a1 + (n-1)*d - n-й член*/
#include <stdio.h>

int main(void)
{
    int a1, d, n;
    scanf("%d; %d; %d", &a1, &d, &n);

    int i = 0;
    for (a1; i < n ; ++i){
        int p = a1 + i * d;
        printf ("%d ", p);
    } 

    return 0;
}