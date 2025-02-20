/*   Напишите программу, в которой вводятся два целых неотрицательных числа в одну строчку через пробел,
 которые заносятся в байтовые беззнаковые переменные с именами flags и mask. Необходимо проверить, 
 включены ли в переменной flags соответствующие биты переменной mask. Например:

flags = 5; // 00000101
mask = 4; // 00000100

В переменной flags включен 2-й бит, проверка проходит. А если:

flags = 5; // 00000101
mask = 6; // 00000110

В переменной flags включен 2-й бит, но выключен 1-й, проверка не проходит.
Если включенные биты переменной mask совпадают с соответствующими включенными битами переменной flags,
 то в консоль вывести строку "yes", иначе - строку "no". */

#include <stdio.h>

int main(void)                         // 1 00001           25        11001
{                                      // 3 00011           128    10000000
    unsigned int flags, mask ;
    scanf("%d %d", &flags, &mask);
    if ((flags ^ mask) == mask)
        printf ("no");
    else 
        printf ("yes");
    
    return 0;
}    

/*#include<stdio.h>
int main(){
    
    unsigned int flags, mask;
    if(scanf("%u %u",&flags,&mask)!=2){
    return 1;
    }
  
    (flags & mask ) ? printf("yes") : printf("no");
     
    return 0;
}
(flags & mask) != 0 */