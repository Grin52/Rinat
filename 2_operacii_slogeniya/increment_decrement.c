#include <stdio.h>
                               // 2; 45; 10
int main(void)
{
    unsigned short time_h = 10; // часы
    unsigned short time_m = 33; // минуты
    unsigned short time_s = 5; // секунды

    unsigned short h, m, s; // добавляемое время: h - часы; m - минуты; s - секунды
    scanf("%hu; %hu; %hu", &h, &m, &s);
    
    int Sec = (int)time_h * 60 * 60 + (int)time_m * 60 + (int)time_s;
    int sec = (int)h * 60 * 60 + (int)m * 60 + (int)s;
    int sum = Sec + sec;

    unsigned int sum_h, sum_m, sum_s;

    sum_s = sum % 60;
    sum_m = (sum / 60) % 60;
    sum_h = sum / 3600;

    printf ("%02d:%02d:%02d\n" , sum_h, sum_m, sum_s); 
        
    return 0;
}