/*  Напишите программу, в которой задаются два макроопределения MAX_WIDTH и MAX_HEIGHT с целочисленными 
значениями 256 и 500 соответственно. Далее, в функции main() следует реализовать чтение двух
 вещественных чисел, записанных в одну строчку через пробел, в переменные width и height 
 (именно в таком порядке). Затем, выполнить проверку: если значение width больше MAX_WIDTH, 
 то width должна быть равна MAX_WIDTH. И аналогичную проверку реализовать для переменной height.
  В конце программы вывести в консоль значения переменных width и height в одну строчку через пробел
   с точностью до десятых.*/

#include <stdio.h>

#define MAX_WIDTH 256
#define MAX_HEIGHT 500

int main(void)
{
    double width, height;
    scanf ("%lf %lf", &width, &height);
    
    if (width > MAX_WIDTH)
        width = MAX_WIDTH;
    if (height > MAX_HEIGHT)
        height = MAX_HEIGHT;
        
    printf ("%.1lf %.1lf\n", width, height);   
    

    return 0; // mhgg

}    
