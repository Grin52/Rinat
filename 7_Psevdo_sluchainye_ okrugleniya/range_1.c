/*   Продолжите программу, которая генерирует псевдослучайные целые числа в диапазоне от a до b (включительно).
 Числа a и b (a < b) считываются из входного потока. Для формирования диапазона значений используйте 
 арифметическую операцию вычисления целого остатка от деления:

y=rnd % (b−a+1)+a

где rnd - случайное целое значение в диапазоне [0; RAND_MAX]. Сгенерируйте десять псевдослучайных
 чисел и выведите их в консоль в одну строчку через пробел.*/



#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    //int rnd = rand ();
    
    //int y = (b - a + 1) + a;
    
    int c1 = rand () % (b - a + 1) + a;
    int c2 = rand () % (b - a + 1) + a;
    int c3 = rand () % (b - a + 1) + a;
    int c4 = rand () % (b - a + 1) + a;
    int c5 = rand () % (b - a + 1) + a;
    int c6 = rand () % (b - a + 1) + a;
    int c7 = rand () % (b - a + 1) + a;
    int c8 = rand () % (b - a + 1) + a;
    int c9 = rand () % (b - a + 1) + a;
    int c10 =rand () % (b - a + 1) + a;
    
    printf ("%d %d %d %d %d %d %d %d %d %d\n", c1, c2, c3, c4, c5, c6, c7, c8, c9, c10 );

    // здесь продолжайте программу. нсли получится
    

    return 0;
}