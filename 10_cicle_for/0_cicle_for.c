/* Инициализация */
int n;
int s = 0;
 
/* Цикл с предусловием */
while(n > 0) {
         s += n*n;    /* Операторы тела цикла */
         n--;         /* Изменение значений */
}



#include <stdio.h>
 
int main(void)
{
         /* Объявление переменных */
         int n, s;
 
         scanf("%d", &n);
 
         /* Цикл с предусловием for */
         for(s = 0; n > 0; --n)
                   s += n*n;    /* Операторы тела цикла */
 
         printf("s = %d\n", s);
         
         return 0;
}

#include <stdio.h>

 // вычисления факториала числа:
int main(void)
{
         int n = 5, p = 1;
 
         for(int i = 1; i <= n; ++i)
                   p = p * i;
 
         printf("p = %d\n", p);
         
         return 0;
}