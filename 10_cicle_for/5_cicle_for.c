/*  Напишите программу, которая читает из входного потока натуральное число n.
С помощью цикла for найти все делители этого числа (то есть, натуральные числа,
которые нацело делят число n, включая числа 1 и n).
 Все найденные делители вывести по порядку (начиная с наименьшего)
в одну строчку через пробел.
ввод: 10
вывод: 1 2 5 10
*/
#include<stdio.h>
int main (void)
{
    int n = 0;
    scanf ("%d", &n);    

    for (int i = n; i != 0; --i)
    {
        int x = n / i;
        if ( n % i == 0)
            printf("%d ", x);
    }
/*
    while ( i != 0 )
    {
        int x = n / i;
        if ( n % i == 0)
        {
            printf ("%d ", x);
        }
        --i;
    }
*/    

    return 0;
}