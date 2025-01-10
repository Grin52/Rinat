#include <stdio.h>
 
int main(void)
{
    double height, a;
    
    printf("Enter the height and length of the triangle's base: ");
    int res = scanf("%lf %lf", &height, &a);
 
    if(res != 2) {      // проверка, что res не равна двум
        printf("Data entry error\n");
        return 0;       // завершение функции main и программы
    }
 
    double sq = height * a / 2.0;
    printf("The square of the triangle is: %.2f", sq);
 
    return 0;
}