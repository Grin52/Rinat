/*  Вычислить массу шара из платины в кг. Плотность платины 21500 кг/м3 
    радиус задается в м. Результат вычисления округлить до следующего числа,
    вывести на stdout.     V = 4/3 π R³
*/
#include <stdio.h>
#include <math.h>
 
int main(void)
{
    float r;
    scanf ("%f", &r);
    char check;
    int p = 21500;
    float v = 4 * acos(-1.0) * pow(r,3) / 3;    // acos(-1.0) это Пи
    float m = p * v;                            // масса
    printf ("%.f", round (m));
    //printf ("%f", v);
   
    return 0;

}